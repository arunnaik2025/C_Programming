#include<stdio.h>
int factorial(int,int,int);
int main(){
    int a ;
    int fact=1;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=1; i<=a; i++){
       // printf("%d",i);
        fact=fact*i;
    }
    printf("Factorial:%d",fact);
    return 0;
}
int factorial(int i,int a,int fact){
    return fact;
}