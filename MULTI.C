#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    double squre=pow(a,2);
    printf("squre of given number is: %lf",squre);
    return 0;
}