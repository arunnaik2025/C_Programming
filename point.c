#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter a element:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d\t\n",arr[i]);
        sum=sum+arr[i];
    }
     printf("sum of total is:%d",sum);
    return 0;
}