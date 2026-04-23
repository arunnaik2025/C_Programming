#include<stdio.h>
int sumofnum(int num);
int main(){
    int number,result;
    printf("Enter a number:");
    scanf("%d",&number);
    result=sumofnum(number);
    printf("The sum of the number is:%d",result);
    return 0;
}
int sumofnum(int num){
    int sum=0;
    while(num!=0){
        sum=sum+(num%10);
        num=num/10;
    }
    return sum;
}