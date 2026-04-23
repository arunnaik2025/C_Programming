#include<stdio.h>
int main(){
    int insert[10]={1,2,3,4,5};
    int n=5;
    int position=10-1;
    int value=25;
    n=9;
    for(int i=n+1; i<position; i++){
        insert[i+1]=insert[i];
    }
    insert[position]=value;
    n++;
    for(int i=0; i<n; i++){
        printf("%d\t",insert[i]);
    }
    return 0;
}