#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    long long int t,n,p,m,c_no,i,k,count,ch=1000000009;
    char c_id[2],panel[100005],s;
    scanf("%lld",&t);
    while(t--)
    {
        memset(panel,'*',sizeof(panel));
        scanf("%lld %lld",&n,&m);
        for(i=0;i<m;i++)
        {
            //fflush(stdin);
            scanf("%s %lld",c_id,&c_no);

            //fflush(stdin);
            //scanf("%lld",&c_no);
            panel[c_no]=c_id[0];

        }
        k=0;p=0;count=1;
        /*
            if(panel[i]!='*')
            {

                if(panel[k]==panel[i])
                    panel[k]='*';
                k=i;
                //printf("%lld",k);

            }
            //printf("%c",panel[i]);
        }*/
        k=0;
        for(i=1;i<=n;i++)
        {
            if(panel[i]!='*' && (panel[k]!=panel[i]))
            {


                {

                    count=count*((p+1)%ch);
                    count=count%ch;
                    p=0;
                    k=i;
                }

            }
            else if(panel[k]==panel[i])
            {
                k=i;
                p=0;
            }
            else if(k!=0)
            {
                p++;
                p=p%ch;
            }

        }
        count=count%ch;
        printf("%lld\n",count);

    }
    return 0;
}
