#include<stdio.h>
int main()
{
    long long int t,i,m,max,n_r,n_g,n_b,r,g,b,max_r,max_g,max_b;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld",&n_r,&n_g,&n_b,&m);
        max_r=-1;max_g=-1;max_b=-1;
        for(i=0;i<n_r;i++)
        {
            scanf("%lld",&r);
            if(r>max_r)
                max_r=r;

        }
        for(i=0;i<n_g;i++)
        {
            scanf("%lld",&g);
            if(g>max_g)
                max_g=g;

        }
        for(i=0;i<n_b;i++)
        {
            scanf("%lld",&b);
            if(b>max_b)
                max_b=b;

        }
        for(i=0;i<m;i++)
        {
            max=(max_r>max_g)?((max_r>max_b)?max_r:max_b):((max_g>max_b)?max_g:max_b);
            if(max==max_r)
            {
                max_r=max_r/2;
                continue;
            }
            if(max==max_g)
            {
                max_g=max_g/2;
                continue;
            }
            if(max==max_b)
            {
                max_b=max_b/2;
                continue;
            }
        }
        max=(max_r>max_g)?((max_r>max_b)?max_r:max_b):((max_g>max_b)?max_g:max_b);
        printf("%lld\n",max);




        //return 0;
    }
    return 0;
}
