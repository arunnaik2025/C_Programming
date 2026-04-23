#include<stdio.h>
void max(int *p1,int *p2){
    if(*p1<*p2){
        printf("less than b");
    }
    else if(*p1>*p2){
        printf("greater than b");
    }
}
int main(){
    int a;
    int b;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Enter the number:");
    scanf("%d",&b);
    max(&a,&b);
    return 0;
}
