#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll;
};
int main(){
    struct student ece[0];
    ece[0].roll=100;
    strcpy(ece[0].name,"Arun");
    printf("name is:%s\n",ece[0].name);
    printf("roll is:%d\n",ece[0].roll);
    return 0;
}