#include<stdio.h>
int main()
{
    long long int t,n,flag,i,min;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        long long int a[n];
        //min=a[0];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            min=a[0];
            if(a[i]<min)
                min=a[i];

        }
        while(min!=1)
        {
            flag=0;
            for(i=0;i<n;i++)
            {
                if(a[i]%min!=0)
                {
                    min--;
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                break;
        }
        if(min==1)
            printf("%lld\n",n);
        else
            printf("-1\n");
    }
    return 0;
}
