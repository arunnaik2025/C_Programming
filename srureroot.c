#include<stdio.h>
#include<math.h>
double squrefun(int a);
int main(){
    int a;
    double number;
    printf("Enter anumber:");
    scanf("%d",&a);
    number=squrefun(a);
    printf("The squre number is:%0.lf",number);
    return 0;
}
double squrefun(int a){
    return pow(a,2);
}