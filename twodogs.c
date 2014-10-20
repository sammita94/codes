#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
long long int min(long long int a,long long int b)
{
    long long int m;
    m=(a<b)?a:b;
    return m;
}
long long int max(long long int a,long long int b)
{
    long long int m;
    m=(a>b)?a:b;
    return m;
}
int main()
{
    long long int n,k,i,*a,*check,p,time_min;
    scanf("%lld %lld",&n,&k);
    a=(long long int*)malloc((n+1)*sizeof(long long int));
    check=(long long int*)malloc(1000001*sizeof(long long int));
    memset(check,0,1000001);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);

        if(check[a[i]]==0)

            check[a[i]]=min(i+1,n-i);

        else
            check[a[i]]=min(check[a[i]],min(i+1,n-i));
    }
    p=(k%2)?k/2:k/2-1;
    time_min=1000005;
    for(i=1;i<=p;i++)
    {
        if(check[i]==0 || check[k-i]==0)
            continue;
        time_min=min(time_min,max(check[i],check[k-i]));

    }
    if(time_min==1000005)
        printf("-1\n");
    else
        printf("%lld\n",time_min);


}
