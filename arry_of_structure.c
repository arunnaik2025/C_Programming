#include<stdio.h>
#include<string.h>
struct student{
	char name[20];
	int age;
	float marks;
};
int main(){
	struct student S[3]={
        {"Arun",21,70},
        {"Kiran",21,75},
        {"vikas",20,78}
    };
    for(int i=0; i<3; i++){
        printf("student=%d",i+1);
        printf("%s\n",S[i].name);
        printf("%d\n",S[i].age);
        printf("%f\n",S[i].marks);
    }
	return 0;
}