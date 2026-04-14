#include<stdio.h>
int number(int);
int main(){
    int a;
     printf("Enter a number:");
    scanf("%d",&a);
    if(a %2!=0){
        printf("odd",a);
    }
    else{
        printf("Even",a);
    }
    return 0;
}
int number(int a){
    return a;
}