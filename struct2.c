#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1={004, 7.25, "Arun"};
    struct student s2={014, 8.25, "Nagappa"};
    printf("roll num=%d\t cgpa is=%f\t name is=%s\n",s1.roll,s1.cgpa,s1.name);
    printf("roll num=%d\t cgpa is=%f\t name is=%s\n",s2.roll,s2.cgpa,s2.name);
    struct student *ptr=&s1;
    printf("roll num=%d\t cgpa is=%f\t name is=%s\n",(*ptr).roll,(*ptr).cgpa,(*ptr).name);
    printf("roll num=%d\t cgpa is=%f\t name is=%s\n",ptr->roll,ptr->cgpa,ptr->name);


    return 0;
}