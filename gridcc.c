#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int t,n,i,j,count1,perm,**pathx,**pathy;
    char s[1003][1003];
    scanf("%lld",&t);
    pathx=(int**)malloc(1005*sizeof(int*));
    for(i=0;i<1005;i++)
        pathx[i]=(int*)malloc(1005*sizeof(int));
     pathy=(int**)malloc(1005*sizeof(int*));
    for(i=0;i<1005;i++)
        pathy[i]=(int*)malloc(1005*sizeof(int));
    while(t--)
    {
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            scanf("%s",s[i]);
        for(j=0;j<n;j++)
        {
            perm=1;
            for(i=n-1;i>=0;i--)
            {
                if(s[i][j]=='#')
                    perm=0;
                pathy[i][j]=perm;
            }
        }
        for(i=0;i<n;i++)
        {
            perm=1;
            for(j=n-1;j>=0;j--)
            {
                if(s[i][j]=='#')
                    perm=0;
                pathx[i][j]=perm;

            }
        }
        count1=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                if(pathx[i][j] && pathy[i][j])
                    count1++;

        }
        printf("%lld\n",count1);

    }
    return 0;
}

