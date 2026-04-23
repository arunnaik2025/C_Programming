#include<stdio.h>
void print(int *n);
int main(){
    int n=4;
    print(n);
    printf("%d\n",n);
   // print(&n);
    return 0;

}
void print(int *n){
    *n=*n* *n;
   // printf("%p\n",n);
}