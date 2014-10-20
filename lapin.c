#include<stdio.h>
#include<string.h>

int main()
{
    long long int l,inp,mid,flag,t,i,check_char[30];
    char str[1001];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%s",str);
        for(i=0;i<30;i++)
            check_char[i]=0;
        l=strlen(str);
        for(i=0;i<(l/2);i++)
        {
            inp=str[i]-97;
            //printf("%lld\n",inp);
            check_char[inp]++;
        }
        if(l%2==0)
            mid=l/2;
        else
            mid=(l/2) +1;
        for(i=mid;i<l;i++)
        {
            inp=str[i]-97;
            check_char[inp]--;
        }
        flag=0;
        for(i=0;i<27;i++)
        {
            if(check_char[i]!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            printf("NO\n");
        else
            printf("YES\n");


    }
    return 0;

}
