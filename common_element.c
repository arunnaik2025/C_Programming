#include<stdio.h>
int main(){
    int arr[100];
    int arr1[100];
    int n1,n2;
    int i,j,k,found,duplicate;
    printf("Enter a number form first arr" );
    scanf("%d",&n1);
    for(i=0; i<n1; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter a nuber from second arr1");
    scanf("%d",&n2);
    for(i=0; i<n2; i++){
        scanf("%d",&arr1[i]);
    }
    for(i=0; i<n1; i++){
        found=0;
        for(j=0; j<n2; j++){
            if(arr[i]==arr1[j]){
                found=1;
                break;
            }
        }
             if(found==0){
            continue;
           }
           duplicate=0;
           for(k=0; k<i; k++){
             if(arr[i]==arr[k]){
               duplicate=1;
               break;
             }
           }
           if(duplicate==0){
            printf("%d ",arr[i]);
           }
    }
    return 0;
}