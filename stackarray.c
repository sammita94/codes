#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
#define max 50
int top=-1;
int st[max];
void Push(int);
void Pop();
void display();
int main()
{
    int ch=0,n;
    while(ch!=4)
    {
        printf("\nWhat do you want to do?\n");
        printf("\n1.Push an element");
        printf("\n2.Pop an element");
        printf("\n3.Display the stack");
        printf("\n4.Exit");
        printf("\nEnter your choice(1/2/3/4):");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                    printf("\nEnter the element:");
                    scanf("%d",&n);
                    Push(n);
                    /*printf("\nPress any key to continue:");
                    getch();*/
                    break;
            }
            case 2:
            {
                Pop();
                /*printf("\nPress any key to continue:");
                getch();*/
                break;

            }
            case 3:
            {
                display();
                /*printf("\nPress any key to continue:");
                getch();*/
                break;
            }
            case 4:
                break;
            default:
            {
                printf("\nPlease check and enter");
                break;
            }

        }

    }
    return 0;
}
void Push(int ele)
{
    if(top==max)
        printf("\nOverflow!!");
    else
    {
        top++;
        st[top]=ele;
    }
}
void Pop()
{
    int e;
    if(top==-1)
        printf("\nUnderflow!!");
    else
    {
        e=st[top];
        top--;
        printf("\nThe deleted element:%d",e);
    }
}
void display()
{
    int i=top;
    printf("\n");
    while(i>=0)
    {
        printf("%d-",st[i]);
        i--;
    }
}
