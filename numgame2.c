#include<stdio.h>
int main()
{
    long long int t,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n%4==1)
            printf("ALICE\n");
        else
            printf("BOB\n");
    }
    return 0;

}
