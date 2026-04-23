#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
void printinfo(struct student s1);
int main(){
    struct student s1={004,9.2,"Arun"};
    printinfo(s1);
    return 0;
}
void printinfo(struct student s1){
    printf("roll num is=%d\n",s1.roll);
    printf("cgpa is=%f\n",s1.cgpa);
    printf("name is=%s\n",s1.name);
}