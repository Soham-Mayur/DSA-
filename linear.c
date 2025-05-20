#include <stdio.h>
int main(){
    int a[10],i,s,flag=0;
    printf("Enter the values into array ");
    for(i=0;i<10;i++){
        scanf("%d", &a[i]);}
        printf("Enter the search eliment ");    
        scanf("%d", &s);
        for(i=0;i<10;i++){
            if(a[i]==s){
                flag=1;
                break;
            }
        }
        if(flag==1){
        printf("search successful at %d position", i+1);
        }
        else
        {
            printf("search is not successful");
        }
        return 0;
}