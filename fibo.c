#include<stdio.h>
int fibo(int a);
int main(){
    fibo(3);
    return 0;
}
int fibo(int a){
    if(a==0 || a==1){
        if(a==0){
            return 0;
        }
        if(a==1){
            return 1;
        }
    }
    int fibmn=fibo(a-1);
    int fibmn2=fibo(a-2);
    int fibmnt=fibo(a-1)+fibo(a-2);
    printf("%d:%d\n",a,fibmnt);
    return fibmnt;
}
