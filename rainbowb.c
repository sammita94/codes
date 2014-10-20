#include<stdio.h>
int main()
{
    long long int n,ch,p,a[8],k,i,j;
    ch=1000000007;
    for(i=1;i<=7;i++)
        a[i]=1;
    scanf("%lld",&n);
    if(n<13)
        printf("0\n");
    if(n==13 || n==14)
        printf("1\n");
    else
    {
        n=n-13;
        n=n/2;
        for(p=1;p<=n;p++)
        {
            //k=0;
            for(i=7;i>=1;i--)
            {
                k=0;
                for(j=i;j>=1;j--)
                {
                    k=k+(a[j]%ch);
                }
                k=k%ch;
                a[i]=k;
            }
        }
        printf("%lld",a[7]);

    }
    return 0;
}
