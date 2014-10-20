#include<stdio.h>
int main()
{
    long long int t,n,i,pro,k,flag;
    scanf("%lld",&t);
    while(t--)
    {
        pro=1;
        scanf("%lld",&n);
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                pro=pro*i;
                if(i*i!=n)
                    pro=pro*(n/i);
                if(pro>=10000)
                {
                    flag=1;
                    pro=pro%10000;
                }

            }
        }
        if(flag==0)
            printf("%lld\n",pro);
        else
        {
            k=0;
            for(i=pro;i>0;i=i/10)
                k++;
            k=4-k;
            for(i=1;i<=k;i++)
                printf("0");
            if(pro!=0)
                printf("%lld\n",pro);
        }
    }
    return 0;
}
