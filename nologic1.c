#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//using namespace std;
int main()
{
    int t,check[27],flag,p,i;
    char str[315],c;
    scanf("%d\n",&t);
    while(t--)
    {
        fflush(stdin);
        //scanf(" %s",str);
        fgets(str, sizeof(str) /* 512 */, stdin /* The standard input */);
        fflush(stdin);
        //memset(check,-1,sizeof(check));
        for(i=0;i<27;i++)
            check[i]=0;
        for(i=0;str[i]!='\0';i++)
        {
            p=(int)str[i];
            if(p>=32 && p<65)
                continue;
            if(p>122 && p<=126)
                continue;
            if(p>=65 && p<=90)
                p=p-65;
            else if(p>=97 && p<=122)
                p=p-97;
            //if(p!=32)
            check[p]++;
        }
        flag=0;
        for(i=0;i<26;i++)
        {
            if(check[i]==0)
            {
                c=(char)(i+97);
                printf("%c\n",c);
                flag=1;
                //break;
            }
            if(flag==1)
            {
                //printf("\n");
                break;
            }
        }
        if(flag==0)
            printf("~\n");

    }
    return 0;
}

