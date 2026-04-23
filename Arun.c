/*#include<stdio.h>
int main(){
    printf("Enter a side");
    int side;
    scanf("%d",&side);
   // printf("the side is:%d",side);
    printf("Enter a 2 side");
    int side2;
    scanf("%d",&side2);
   // printf("the side 2 is:%d",side2);
    printf("The total area of squre is:%d",side*side2);
    return 0;
}*/
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,num,sum;
    printf("enter a number");
    scanf("%d",&num);
    a=num/100;
    b=(num/10)%10;
    c=num%10;
    printf("%d\n",num);
    sum=pow(a,3)+pow(b,3)+pow(c,3);
    printf("%d\n",sum);
    if(sum==num){
        printf("it is armstrong number%d\n");
    }
    else{
        printf("its not a armstrong number%d\n");
    }
    return 0;
}

