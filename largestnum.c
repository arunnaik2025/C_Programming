#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int large[n];
    printf("Enter element;");
    for(int i=0; i<n; i++){
        scanf("%d",&large[i]);
    }
    int largest=large[0];
    for(int i=0; i<n; i++){
        if(large[i]>largest){
            largest=large[i];
        }}
         printf("%d",largest);
    /*int large[10]={7,2,6,5,9,7};
    int n=10;
    printf("Enter a number:\t");
    scanf("%d",&large[10]);  
    int largest=large[0];
    for(int i=0; i<n; i++){
        if(large[i]>largest){
            largest=large[i];
        }
       // print("%d",largest);
    }
     printf("%d",largest);*/
    return 0;
}