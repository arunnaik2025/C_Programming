#include<stdio.h>
void squre(int *a,int *b);
int main(){
    int a=4;
    int b=5;
    squre(&a,&b);
    printf("number of a=%d\n and number b=%d",a,b);
    return 0;
}
void squre(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    printf("number of a=%d\n and number b=%d",a,b);
}