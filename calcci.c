#include<stdio.h>
int main(){
    int a,b;
    char operator;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter a operator");
    scanf("%c",&operator);
    printf("Enter a number:");
    scanf("%d",&b);
    switch(operator){
        case 1:'+';
        printf("%d",a+b);
        break;
        case 2:'-';
        printf("%d",a-b);
        break;
        default:printf("not valid");
    }
    return 0;
}