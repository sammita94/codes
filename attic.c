#include<stdio.h>
#include<string.h>
int main()
{
    long long int t,n,i,day,k;
    char str[5000002];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%s",str);
        day=0;n=0;
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]=='.')
            {
                k=0;
                while(str[i]=='.')
                {
                    k++;
                    i++;
                }
                if(n<k)
                {
                    day++;
                    n=k;
                }

            }
        }
        printf("%lld\n",day);

    }
    return 0;
}
