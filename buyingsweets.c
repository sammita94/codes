#include<stdio.h>
int main()
{
    long long int c,i,flag,sum,t,n,x,a[101];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&x);
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            sum=sum+a[i];
        }
        c=sum%x;
        flag=0;
        for(i=0;i<n;i++)
        {
            if(a[i]<=c)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            printf("-1\n");
        else
            printf("%lld\n",(sum/x));
    }
    return 0;
}
