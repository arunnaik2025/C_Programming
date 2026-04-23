#include<stdio.h>
int main(){
    do{
        int n;
        printf("Enter the number:");
        scanf("%d",&n);
        if(n%2!=0){
            printf("%d",n);
            break;
        }
    }while(1);
    printf("end");
    return 0;
}