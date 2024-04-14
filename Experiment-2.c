#include<stdio.h>
void push();
void pop();
int stack[100],max,i,top=-1,choice;
void push()
{
    int val;
    if(top==max-1)
    {
        printf("Overflow....");
    }
    else
    {
        printf("\nPush the element into stacks");
        while(top<max-1)
        top=top+1;
        printf("\nEnter the %d index value:",top);
        scanf("%d",&val);
        stack[top]=val;
    }
    printf("\nThe element in stack are...");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack);
    }
}
void pop()
{
    int c;
    if(top==-1)
    {
        printf("\nUnderflow....");
    }
    else
    {
        printf("\nEnter the number of element to pop..");
        scanf("%d",&c);
        if(c>max)
        {
            printf("\nNo enough element to perform pop....");
        }
        else
        {
            top-=c;
            printf("\nThe element are deleted.....");
            if(top==-1)
            {
                printf("\nAll element are poped");
            }
            else
            {
                printf("\nThe element in stack are....");
                for(i=top;i>=0;i--)
                {
                    printf("%d\n",stack[i]);
                }
            }
        }
    }
}
int main()
{
    printf("\nEnter the number of element to push into stacks:");
    scanf("%d",&max);
    while(1)
    {
        printf("\n1.Push\n2.Pop\n3.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            printf("Exiting.....");
            return 0;
            default:
            printf("\nInvalid choice.....");
        }
    }
    return 0;
}
