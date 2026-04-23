#include<stdio.h>
void calc(int a,int b,int *sum,int *product,float *avg);
int main(){
    int a=5;
    int b=2;
    int sum,product;
    float avg;
    calc(a,b,&sum,&product,&avg);
    printf("a+b=%d\na*b=%d\n a/b=%f\n",sum,product,avg);
    return 0;
}
void calc(int a,int b ,int *sum,int *product,float *avg){
    *sum=a+b;
    *product=a*b;
    *avg=(a+b)/2;
}
