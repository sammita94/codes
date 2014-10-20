#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}*top;
void Push(int);
void Pop();
void display();
int main()
{
    int ch=1,n;top=NULL;
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
                    display();
                    printf("\n..........................................................");

                    break;
            }
            case 2:
            {
                Pop();
                display();
                printf("\n..........................................................");
                /*printf("\nPress any key to continue:");
                getch();*/
                break;

            }
            case 3:
            {
                display();
                printf("\n..........................................................");
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
void Push(int e)
{
    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node*));
    if(!ptr)
    {
        printf("\nOverflow!!");
        exit(0);

    }
    else
    {
        ptr->data=e;
        ptr->next=NULL;
        if(top==NULL)
            top=ptr;
        else
        {
            ptr->next=top;
            top=ptr;
        }
    }


}
void Pop()
{
    struct node* save;
    if(top==NULL)
        printf("Underflow!!");
    else
    {
        save=top;
        top=top->next;
        free(save);
    }
}
void display()
{
    struct node* p;
    p=top;
    while(p!=NULL)
    {
        printf("%d-",p->data);
        p=p->next;
    }
}
