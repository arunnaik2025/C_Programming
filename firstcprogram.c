/*#include<stdio.h>
int main(){
    printf("Enter a number");
    int a;
    scanf("%f",&a);
    printf("Enter a number:");
    int b;
    scanf("%f",&b);
    printf("The result is:%d",a/b);
    return 0;
}*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int i=0;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}