#include<stdio.h>
#include<math.h>
int main()
{
    float d,ds,dt,d1,d2,d3,ans,max;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%f %f %f",&ds,&dt,&d);
        if((ds+dt)>d)
        {
            d1=ds+dt;
            d2=d+dt;
            d3=ds+d;
            if(d1>=d && d2>=ds && d3>=dt)
                ans=0.0;
            else
            {
                d1=fabs((fabs(ds)-fabs(d-dt)));
                d2=fabs((fabs(d+dt)-fabs(ds)));
                d3=fabs(d-(dt+ds));
                printf("%f %f %f",d1,d2,d3);
                if(d1<d2)
                {
                    if(d1<d3)
                        ans=d1;
                    else
                        ans=d3;
                }
                else
                {
                    if(d2<d3)
                        ans=d2;
                    else
                        ans=d3;
                }
            }
            printf("%f\n",ans);

        }


        else
            printf("%f\n",(d-(ds+dt)));
    }
    return 0;

}
