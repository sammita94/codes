#include<stdio.h>
int main()
{
    long long int t,n,c,k,p;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        c=0;
        while(n>=2048)
        {
            n=n-2048;
            c++;

        }
        for(p=10;p>=0;p--)
        {
            k=1<<p;
            if(n&k)
                c++;
        }
        printf("%lld\n",c);
    }
}
