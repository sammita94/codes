#include<stdio.h>
int main()
{
    long long int i,max,t,n,m,a[105];
    scanf("%lld",&t);
    while(t--)
    {
        max=-1;
        scanf("%lld %lld",&n,&m);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]>max)
                max=a[i];

        }
        //if()
        for(i=0;i<n;i++)
        {
            m=m-(max-a[i]);
        }
        if(m>0)
            m=m%n;
        if(m==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
