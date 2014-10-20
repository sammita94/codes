#include<stdio.h>
int main()
{
    long long flag,t,n,i,j,m,k,r,c,step[100005][2],p,cell[105][105];

        scanf("%lld %lld %lld",&n,&m,&k);
        p=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
                cell[i][j]=0;
        }
        for(i=0;i<k;i++)
        {
            scanf("%lld %lld",&r,&c);
            cell[r][c]=1;
        }
        p=0;flag=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(j==1 && cell[i][j]!=1)
                {
                    step[p][0]=i;
                    step[p][1]=j;
                    p++;
                }
                if(cell[i][j]==1 && j!=m)
                {
                    flag=1;
                }
                if(cell[i][j]!=1 && flag==1)
                {
                    step[p][0]=i;
                    step[p][1]=j;
                    p++;
                    flag=0;
                }

            }
        }
        printf("%lld\n",p);

        for(i=0;i<p;i++)
            printf("%lld %lld %s\n",step[i][0],step[i][1],"0");

        return 0;
}
