#include<stdio.h>
int main()
{
    long long t,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n%2==1)
            printf("BOB\n");
        else
            printf("ALICE\n");
    }
    return 0;
}
