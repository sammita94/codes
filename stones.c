#include<stdio.h>
#include<string.h>
int main()
{
    long long int t,i,k,count;
    char j[105],s[105];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%s",j);
        scanf("%s",s);
        count=0;
        for(i=0;s[i]!='\0';i++)
        {
            for(k=0;j[k]!='\0';k++)
            {
                if(s[i]==j[k])
                {
                    count++;
                    break;
                }
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}
