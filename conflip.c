#include<stdio.h>
int main()
{
    long long int t,g,n,q,l;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&g);
        while(g--)
        {
            scanf("%lld %lld %lld",&l,&n,&q);
            if(n%2==0)
            {
                printf("%lld\n",(n/2));
            }
            else
            {
                if(l==1)
                {
                    if(q==1)
                        printf("%lld\n",(n/2));
                    else
                        printf("%lld\n",(n/2 + 1));
                }
                else
                {
                    if(q==1)
                        printf("%lld\n",(n/2 + 1));
                    else
                        printf("%lld\n",(n/2));
                }
            }
        }
    }
    return 0;
}
