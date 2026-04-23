#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1;
    s1.roll=50;
    s1.cgpa=7.25;
    strcpy(s1.name,"Arun");
    printf("name is:%s\n",s1.name);
    printf("roll no is:%d\n",s1.roll);
    printf("cgpa is:%f\n",s1.cgpa);
    return 0;
}