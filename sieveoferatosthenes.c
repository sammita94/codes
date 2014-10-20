#include<stdio.h>
#include<string.h>
#include<math.h>
#define n 32000
long long int arr[n];
long long int prime[n];
void markmultiple(long long int a)
{
    long long int num,i=2;
    while((num=(i*a))<=n)
    {
        arr[num-1]=1;
        ++i;
    }
}
void sieve()
{
    long long int i,j=0;
    if(n>=2)
    {
        for(i=1;i<=n;++i)
        {
            if(arr[i]==0)
            {
                prime[j]=i+1;
                markmultiple(i+1);
                j++;
            }
        }
    }
}
void print_nos(long long int s,long long int e)
{
    long long int i,flag=0,root;
    while(s<=e)
    {
        flag=0;root=sqrt(s);
        for(i=0;prime[i]<=root;i++)
        {
            if(s%prime[i]==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%lld ",s);
        s++;
    }
}
int main()
{
    long long int t,low,high;
    scanf("%lld",&t);
    memset(arr,0,sizeof(arr));
    memset(prime,0,sizeof(arr));
    sieve();
    while(t--)
    {
        scanf("%lld %lld",&low,&high);
        //sieve(high);
        if(low==1)
            low=2;
        print_nos(low,high);
    }
    return 0;
}
