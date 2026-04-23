#include<stdio.h>
int main(){
    FILE*fpter;
    fpter=fopen("ab.txt","w");
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        if(i%2!=0){
            fprintf(fpter,"Odd number is:%d\n",i);
        }
    }
    fclose(fpter);
    return 0;
}