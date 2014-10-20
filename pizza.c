#include<stdio.h>
int main()
{
    long long int t,n,c;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        c=(n%2)?(n/2+1):n/2;
        printf("%lld\n",c);
    }
    return 0;
}
