#include<stdio.h>
#include<math.h>
double num(float);
int main(){
    float a;
    printf("Enter a number:");
    scanf("%f",&a);
    printf("The squre is:%lf",pow(a,2));
    return 0;
}
double num(float a){
    return (a,2);
}