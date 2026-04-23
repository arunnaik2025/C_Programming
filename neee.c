#include<stdio.h>
int main(){
    int a,b;
    char operator;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter b number:");
    scanf("%d",&b);
    printf("the operator is:");
    scanf("%c", &operator);
    switch(operator){
        case '+':printf("%d",a+b);
                 break;
    }
    return 0;
    
}