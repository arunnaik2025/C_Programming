#include<stdio.h>
int main(){
    int i,a,count=0;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a<=1){
        printf("no prime number");
    }
    else{
        for(int i=1; i<=a; i++){
            if(a%i==0){
                count++;
            }
        }
        if(count==2){
            printf("prime number");
        }
        else{
            printf("not prime number");
        }
    }
    return 0;
}