#include<stdio.h>
int main()
{
            long long int t,n,m,a[100100],i,j,k,sum,pos,flag;
            char b[100100];
            for(i=1;i<=100100;i++)
            a[i]=0;
            char ch[2];
            scanf("%lld",&t);
            while(t--)
            {          sum=1,flag=0;
                       scanf("%lld %lld",&n,&m);
                       for(i=1;i<=m;i++)
                       {          scanf("%s",ch);
                                   b[i]=ch[0];
                                 scanf("%lld",&k);






                                 a[k]=ch[0];
                       }
                      // for(i=1;i<=n;i++)
                       //{
                         // if()

                       //}
                       for(i=1;i<m;i++)
                       {
                            if(b[i]!=b[i+1])
                            {flag=1;
                            break;}

                       }
                       if(m==1||flag==0)
                       printf("%lld\n",1%1000000009);
                       else

                       {
                                i=1;
                                while(a[i]==0&&i<=n)
                                 {

                                     (i++)%1000000009;
                                 }
                                 pos=i;
                                  while(i<n)
                                  {


                                       while(i<n&&a[i+1]==0)
                                       {
                                          (i++)%1000000009;



                                       }
                                        if(a[i+1]==a[pos]&&i<n)
                                        {
                                           pos=(i+1)%1000000009;
                                           (i++)%1000000009;

                                        }
                                        else if(i<n)
                                        {
                                              sum=(sum*((i+1-pos)%1000000009)%1000000009);
                                             pos=(i+1)%1000000009;
                                             (i++)%1000000009;
                                        }

                                  }

                                   sum=sum%1000000009;
                                  printf("%lld\n",sum);

                       }





            }
            return 0;

}
