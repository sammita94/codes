#include<stdio.h>
int main()
{
    long long int t,n,h_in,d_in,dif,count,vil[100005],human[100005],dino[100005],i,h,d;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        d_in=0;h_in=0;count=0,h=0;d=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&vil[i]);
            if(vil[i]>0)
            {
                human[h_in]=i;
                //printf("%lld",human[h_in]);
                h_in++;
            }
            if(vil[i]<0)
            {
                dino[d_in]=i;
                //printf("%lld",dino[d_in]);
                d_in++;
                vil[i]=-vil[i];
            }
        }
        while(h<h_in && d<d_in)
        {
            if(vil[human[h]]>=vil[dino[d]])
            {
                vil[human[h]]=vil[human[h]]-vil[dino[d]];

                dif=human[h]-dino[d];
                if(dif<0)
                    dif=-dif;
                dif=dif*vil[dino[d]];
                count=count+dif;
                vil[dino[d]]=0;
            }
            else
            {
                vil[dino[d]]=vil[dino[d]]-vil[human[h]];

                dif=human[h]-dino[d];
                if(dif<0)
                    dif=-(dif*vil[human[h]]);
                count=count+dif;
                vil[human[h]]=0;
            }
            if(vil[human[h]]==0)
                h++;
            if(vil[dino[d]]==0)
                d++;
        }
        printf("%lld\n",count);
    }
    return 0;
}
