#include<stdio.h>
int main()
{
    int t,n,p,a[101],count,i;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%d %d",&n,&p);
        //printf()
        for(i=0;i<n;i++)
        {
            //printf("1");
            scanf("%d",&a[i]);
            if(a[i]>=p)
                count++;
            //else
               // break;

        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}
