#include<stdio.h>
float sum(float,float);
int main(){
    float a,b;
    float result;
    printf("Enter a 1st number:",a);
    scanf("%f",&a);
    printf("Enter a 2nd number:",b);
    scanf("%f",&b);
    result=sum(a,b);
    printf("sum of the number:%f",result);
    return 0;
}
float sum(float a,float b){
    return (a+b);
}