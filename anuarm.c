#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long long int t,n,a[100005],m,k,i,p,min,max,avg;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        for(i=0;i<m;i++)
        {
            scanf("%lld",&k);
            if(i==0)
            {
                max=k;
                min=k;
            }
            else
            {
                if(k<min)
                    min=k;
                if(k>max)
                    max=k;
            }
        }
        avg=(max+min)/2;
        k=max;
        for(i=0;i<=avg;i++)
        {
            printf("%lld ",k);
            k--;
        }
        k=abs(avg+1-min);
        for(i=avg+1;i<n;i++)
        {
            printf("%lld ",k);
            k++;
        }
        printf("\n");

    }
    return 0;
}
