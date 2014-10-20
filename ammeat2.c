#include<stdio.h>
int main()
{
    long long int t,n,k,i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&k);
        if(n==1 && k==1)
        {
            printf("1\n");
            //continue;
        }
        else if(k>n/2)
        {
            printf("-1\n");
           // continue;
        }
        else if(k<=n/2)
        {
            i=2;
            while(k--)
            {
                printf("%lld ",i);
                i=i+2;
            }
            printf("\n");

        }
    }
    return 0;
}



