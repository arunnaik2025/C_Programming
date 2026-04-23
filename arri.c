#include<stdio.h>
int arrcount(int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5,6,7};
    //arrcount(arr,7);
    printf("%d\n",arrcount(arr,7));
    return 0;
}
int arrcount(int arr[],int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i] %2!=0){
            printf("%d\t",arr[i]);
            count++;
        }
    }
    return count;
}