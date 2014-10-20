#include<stdio.h>
void push(char);
char pop();
char str[405],st[405];
int t,top,i;
int main()
{
    char ch;
    scanf("%d",&t);
    while(t--)
    {
        top=-1;
        scanf("%s",str);
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]=='(' || str[i]=='*' || str[i]=='+' || str[i]=='/' || str[i]=='-'|| str[i]=='^')
                push(str[i]);
            else if(str[i]==')')
            {
                ch=pop();
                while(ch!='(')
                {
                    printf("%c",ch);
                    ch=pop();
                }
            }
            else
                printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}

void push(char ch)
{
    top++;
    st[top]=ch;
}
char pop()
{
    char ch;
    ch=st[top];
    top--;
    return ch;
}
