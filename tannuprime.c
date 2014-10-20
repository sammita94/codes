#include<stdio.h>

int main()
{
    long long int t,n,m,i,j,count;
    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld %lld",&m,&n);


        for(i=m;i<=n;i++)
        {
            count=0;
            for(j=2;j<=i-1;j++)
            {
                if(i%j==0)
                count++;
            }

            if(count==0)
            {
                printf("%lld\n",i);
            }
        }

        printf("\n\n");

    }

    return 0;
}
