#include<stdio.h>
#include<stdlib.h>
long long int check[1001]={-1};
int main()
{
    long long int t,n,i,j,flag,count,r,k;
    char s[1001][1001];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        //char s[n][n];
        long long int check[n];
        count=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                //fflush(stdin);
                scanf("%s",&s[i][j]);
                //printf("%c",s[i][j]);
                //fflush(stdin);
                if(s[i][j]=='#')
                    check[j]=i;
            }
        }
        //printf("%lld %lld",i,j);
        for(j=n-1;j>=0;j--)
        {
            if(check[j]!=(n-1))
            {
                r=check[j]+1;
                flag=0;
                for(k=r;k<n;k++)
                {
                    for(i=j;i<n;i++)
                    {
                        if(s[k][i]=='#')
                        {
                            flag=1;
                            break;
                        }

                    }
                    if(flag==0)
                        count++;
                }
            }
        }
        printf("%lld\n",count);

    }
    return 0;
}
