#include<stdio.h>

void exchange(int arr[],int n);
void print(int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5};
    exchange(arr,5);
    print(arr,5);
    return 0;
}
void print(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void exchange(int arr[],int n){
    for(int i=0; i<n/2; i++){
        int firstvalue=arr[i];
        int secondvalue=arr[n-i-1];
        arr[n-i-1]=firstvalue;
        arr[i]=secondvalue;
        //printf("%d\t",arr[i],arr[n-i-1]);
    }
}