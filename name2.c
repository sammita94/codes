#include<stdio.h>
#include<string.h>
long long int len_check(long long int l1,char s1[],long long int l2,char s2[])
{
    long long int i,k=0;
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]==s2[k])
            k++;
    }
    if(k==l2)
        return 1;
    else
        return 0;



}
int main()
{
    long long int t,ch,l1,l2;
    char s1[25001],s2[25001];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%s",s1);
        scanf("%s",s2);
        l1=strlen(s1);
        l2=strlen(s2);
        if(l1>l2)
            ch=len_check(l1,s1,l2,s2);
        else
            ch=len_check(l2,s2,l1,s1);
        if(ch==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
