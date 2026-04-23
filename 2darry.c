#include<stdio.h>
void mult(int arr[][10],int n,int m,int num);
int main(){
    int table[2][10];
    mult(table,0,10,2);
    mult(table,1,10,3);
    for(int i=0; i<10; i++){
        printf("%d\t",table[0][i]);
    }
    printf("\n");
    for(int i=0; i<10; i++){
        printf("%d\t",table[1][i]);
    }
    return 0;
    }
void mult(int arr[][10],int n,int m,int num){
    for(int i=0; i<m;i++){
        arr[n][i]= num *(i+1);
    }
}