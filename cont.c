/*#include<stdio.h>
int main(){
    for(int i=5; i<=50; i++){
        if(i%2==0){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int i=10;
    while(i>=1){
        i--;
        printf(" %d\n",i*n);
    }
    
    //printf(" %d\n",i*n);
    return 0;
}