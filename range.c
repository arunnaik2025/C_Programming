#include<stdio.h>
int count=0;
int a=50;
int main(){
    //printf("Enter a number:");
    for(int i=1; i<=a; i++){
        if(a%i==0){
            count++;   
        }
    }
    return 0;
}