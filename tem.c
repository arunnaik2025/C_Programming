#include<stdio.h>
int temparature(int a);
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    temparature(a);
    return 0;
}
int temparature(int a){
    if(a<=12){
        printf("Cold\n");
    }
    else{
        printf("Hot");
    }
}