#include<stdio.h>
int delete();

int a[20],n,i,c=0;
int main()
{
    int ch;
    printf("Enter n value:");
    scanf("%d",&n);
    printf("Enter the %d element:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n The %d element are:",n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n Enter thenumber according to your choice:\n");
    printf("1.Delete\n2.Insert\n3.Search\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
             delete();
             break;
        default:
             printf("Invalid choice");
    }
    return 0;
}
int delete()
{
    int x,pos;
    printf("\nEnter the element to delete..");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            c=1;
            pos=i;
            break;
        }
    }
    if(c==0)
    {
        printf("The element is not found..");
    }
    else
    {
        for(i=pos;i<n;i++)
        {
            a[i]=a[i=1];
        }
        n=n-1;
        printf("The element after deletion are..");
        for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
    }
}
int linear()
{
    int x,i;
    printf("enter the element to delete:");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            c=1;
            printf("the element is found");
        }
    }
    if(c==0)
    {
        printf("the element is not found..");
    }
    int insert();
    {
        int x,pos;
        printf("\n Enter the element to insert..");
        scanf("%d",&n);
        printf("\n Enter the position to insert..");
        scanf("%d",&pos);
        for(i=n+1;i>=pos;i--);
        {
            a[i+1]=a[i];
        }
        a[pos]=x;
        n=n+1;
        for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
        }
    }
}
