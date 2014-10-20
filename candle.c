#include<stdio.h>
int main()
{
    long long int t,a[10],min,i,minpos;
    scanf("%lld",&t);
    while(t--)
    {
        //min=a[1];minpos=1;
        for(i=0;i<10;i++)
        {
            scanf("%lld",&a[i]);
            if(i==1)
            {
                min=a[i];minpos=i;
            }
            if(i!=0)
            {
                if(a[i]<min)
                {
                    minpos=i;
                    min=a[i];
                    //printf("%lld",min);
                }
            }
        }
        if(a[0]<min)
        {
            printf("1");
            for(i=0;i<=a[0];i++)
                printf("0");


        }
        else
        {
            //printf("%lld",min);
            for(i=0;i<=min;i++)
                printf("%lld",minpos);
        }
        printf("\n");

    }
    return 0;
}
