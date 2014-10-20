#include<stdio.h>
long long int lucky(long long int d)
{
    long long int i,flag=0;
    for(i=d;i>0;i=i/10)
    {
        if(i%10==4 || i%10==7)
        {
            flag=1;
            break;
        }
    }
    return flag;
}
int main()
{
    long long int t,n,i,check,d1,d2,count;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        count=0;
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                d1=i;
                d2=n/i;
                check=lucky(d1);
                if(check==1)
                {
                    count++;
                   // printf("%lld\n",d1);
                }
                check=lucky(d2);
                if(check==1)
                {
                    count++;
                    //printf("%lld\n",d2);
                }
            }
        }
        check=lucky(n);
        if(check==1)
            count++;
        printf("%lld\n",count);
    }
    return 0;
}
