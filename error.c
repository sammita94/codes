#include<stdio.h>
int main()
{
    long long int t,i,count;
    char str[100005],c;
    scanf("%lld",&t);
    while(t--)
    {
        count=1;
        scanf("%s",str);
        for(i=0;str[i]!='\0';i++)
        {
            if(i!=0)
            {
                if(str[i]!=c)
                {
                    count++;

                }
                else
                    count=1;
            }
            if(count==3)
                break;
            c=str[i];

        }
        if(count==3)
            printf("Good\n");
        else
            printf("Bad\n");
    }
    return 0;
}

