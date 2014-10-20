#include<stdio.h>
long long int row_check[1001];
long long int col_check[1001];
int main()
{
    long long int t,n,i,j,bot,count,max_row,k;
    char s[1001][1001];
    scanf("%lld",&t);
    while(t--)
    {

        scanf("%lld",&n);
        /*for(i=0;i<n;i++)
        {
            row_check[i]=-1;
            col_check[i]=-1;
        }*/
        for(i=0;i<n;i++)
        {
            row_check[i]=-1;
            for(j=0;j<n;j++)
            {
                if(i==0)
                    col_check[j]=-1;
                scanf("%s",&s[i][j]);
                if(s[i][j]=='#')
                {
                    row_check[i]=j;
                    col_check[j]=i;
                }
            }
        }
        for(bot=0;bot<n;bot++)
        {
            if(col_check[bot]!=(n-1))
            {
                max_row=col_check[bot]+1;
                for(k=max_row;k<n;k++)
                {
                    if(row_check[k]<bot)
                        count++;
                }
                //printf("%lld\n",count);
            }
        }
        printf("%lld\n",count);

    }
    return 0;
}
