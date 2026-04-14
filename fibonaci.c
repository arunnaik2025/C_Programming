#include<stdio.h>
void fibonacci(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    fibonacci(n);
    //4printf("%d",(n));
       // printf("The fibonaci series %d",);
    return 0;
}
void fibonacci(int n){
    int a=0, b=1, next;
    for(int i=0; i<n; i++){
        printf("%d",a);//here print the fibonaci value
        next = a + b;
        a = b;
        b = next;
    }
}