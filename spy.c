#include<stdio.h>
int main(){
int digit,num,sum,fact;
printf("Enter a number");
scanf("%d",&num);
sum=0;
fact=1;
while(num>0){
digit=num%10;
sum=sum+digit;
fact=fact*digit;
num=num/10;
}
if(sum==fact){
printf("spy");
}
else{
printf("not spy");
}
return 0;
}