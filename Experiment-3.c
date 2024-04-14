#include<stdio.h>
#include<string.h>
char str[1000];
int max,top=1;
char stack[1000];
void push(char c)
{
    if(top==max-1)
    {
        printf("stack overflow\n");
        return;
    }
    stack[++top]=c;
}
void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow\n");
        return;
    }
    top--;
}
void checkparenthesis()
{
    max=strlen(str);
    for(int i=0;i<max;i++)
    {
        if((str)[i]=='('||str[i]=='{'||str[i]=='[')
        {
            push(str[i]);
        }
       elseif((str[i]==')'&& stack[top]=='(')||(str[i]=='}'&& stack[top]=='{')||(str[i]==']'&& stack[top]=='['));
        {
            pop();
        }
        else
        {
            printf("Unbalanced Parenthesis\n");
            return;
        }
    }
}
if(top==-1)
{
    printf("Unbalanced Parenthesis:");
}
{
    int main()
    {
        printf("Enter the expression:");
        gets(str);
        Check Parenthesis();
        return 0;
    }
}
