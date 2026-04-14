#include<stdio.h>
void largestsmallest(int,int);//void no value is return
int main(){//main function
    int a,b;//ineteger 
    printf("Enter a number:");
    scanf("%d",&a);//user input
    printf("Enter a number:");
    scanf("%d",&b);//user input
    largestsmallest(a,b);//stores the both the value
    return 0;
}
void largestsmallest(int a,int b){//call the function
   if(a<b){//condition
        printf("b is largest\n",a,b);//print the value
        printf("a is smallest\n",a,b);//print the value
    }
    else if(a>b){
        printf("b is smallest\n",a,b);//print the value
        printf("a is largest\n",a,b);//print the value
    }
    else{
        printf("both are equal",a,b);//print the value
    }
}
/*This program give the largest and smallest value of the user input*/
