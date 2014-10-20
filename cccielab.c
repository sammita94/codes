#include<stdio.h>
int main()
{
    long int a,b,ans;
    scanf("%ld %ld",&a,&b);
    ans=a-b;
    ans=ans+1;
    if(ans%10==0)
    {
        ans=ans-2;
    }
    printf("%ld",ans);
    return 0;
}
