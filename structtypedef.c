#include<stdio.h>
#include<string.h>
typedef struct electronicsandcommunocationengineering{
    int roll;
    float cgpa;
    char name[100];
} ece;
int main(){
    ece s1;
    s1.roll=1052;
    s1.cgpa=8.2;
    strcpy(s1.name,"arun");
    printf("The name is=%s",s1.name);
    return 0;
}
