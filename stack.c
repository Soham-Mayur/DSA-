#include<stdio.h>
#define size 5
int main()
{
     int a[size],top=-1,item,ch,i;
    do
    {
    printf("\n press 1 for push");
    printf("\n press 2 for pop");
    printf("\n press 3 for display");
    printf("\n press 4 for exit");
    printf("\n enter your choice");
    scanf("%d", &ch);
    switch (ch)
    {
        case 1:
        if (top==size-1)
        {
            printf("\n stack is overflow");
        }
        else
        {
            printf("enter push eliment=");
            scanf("%d", &item);
            top++;
            a[top]=item;
        }
        break;
        case 2:
        if(top==-1)
        {
            printf("\n the stack is underflow");
        }
        else
        {
            printf("the pop eliment is= %d",a[top]);
            top--;
        }
        break;
        case 3:
        if(top==-1)
        {
            printf("\n the stack is empty");
        }
        else
        {
            printf("The stack is=\n");
            for(i=top;i>=0;i--)
            {
              printf("\n %d",a[i]);
            }
        }

break;
case 4:return 0;
default:printf("wrong choice");
}
//end of switch
}
while(1);
}


