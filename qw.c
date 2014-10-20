#include<stdio.h>
int main()
{
    int l,m,q,p,i,j,rem,count;
    char str[20005];
    scanf("%s",str);
    scanf("%d",&q);
    while(q--)
    {
        count=0;
        scanf("%d %d",&m,&l);
        rem=0;
        for(i=0;str[i]!='\0';i++)
        {
            rem=0;
            for(j=i;str[j]!='\0';j++)
            {
                p=((int)(str[j])-48);
                rem=rem*10+ p;
                rem=rem%m;
                if(rem==l)

                    count++;
            }



        }
        printf("%d\n",count);
    }
    return 0;
}
