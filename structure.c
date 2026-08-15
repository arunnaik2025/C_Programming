#include<stdio.h>
#include<string.h>
struct student{
	char name[20];
	int age;
	float marks;
};
int main(){
	struct student S1;
	S1.age=21;
	S1.marks=75;
	strcpy(S1.name,"Arun");
	printf("%s\n",S1.name);
	printf("%d\n",S1.age);
	printf("%f\n",S1.marks);
	return 0;
}