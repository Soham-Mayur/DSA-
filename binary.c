#include<stdio.h>
int main(){
    int a[10],i,s,lb,ub,mid,flag=0;
printf("\n Enter the values into array in ascending order");
for(i=0;i<10;i++)
{
    scanf("%d", &a[i]);
}
printf("\n Enter the search eliment");
scanf("%d",&s);
lb=0;
ub=3;
while(lb<=ub)
{
    mid=(lb+ub)/2;
    if(s==a[mid])
    {
        flag=1;
        break;
    }
    else if(s>a[mid])
    {
        lb=mid+1;
    }
    else
    {
        ub=mid-1;
    }
}
//end of while
if(flag==1)
{
    printf("the search is successful at %d",(mid+1));
}
else
{
    printf("search is not successful");
}
return 0;
}
