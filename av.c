#include<stdio.h>
int main(){
    printf("Enter a number:");
    int n;
    scanf("%d",&n);
    int sum=0;
    int i=0;
    do{
        printf("%d\n",i);
        i++;
        sum=sum+1;
    }while(i<=n);
    printf("sum%d",sum);
    return 0;
}
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1; i<=10; i++){
        printf("%d\n",n*i);
    }
    return 0;
}*/