#include<stdio.h>
int main()
{
    long long int t,n,i,sum;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        sum=1;
        for(i=2;(i*i)<=n;i++)
        {
            if(n%i==0)
            {
                sum=sum+i;
                sum=sum+(n/i);
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
