#include<stdio.h>
#include<string.h>
typedef struct account{
    int accountnum;
    char name[100];
} acc;
int main(){
    acc acc1={1234,"Arun"};
    acc acc2={1256,"kartik"};
    printf("Accont num:%d\n",acc1.accountnum);
    printf("Name is:%s",acc1.name);
    return 0;
}