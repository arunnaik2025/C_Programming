#include<stdio.h>
#include<string.h>
typedef struct studentdetails{
    char ECE[2][100];
    char CSE[2][100];
} stu;
typedef struct teacherdetails{
    char teacherECE[100];
    char teacherCSE[100];
}tea;
typedef struct saffdetails{
    char staffECE[100];
    char staffCSE[100];
} sta;
int main(){
    char dept[10];
    stu ECE={
        {"Arun","Kiran"},//ECE student 
        {"Sharan","Subhash"}//CSE student
    };
    printf("Type department:");
    scanf("%s",dept);
    if(strcmp(dept, "ece")==0){
       for(int i=0; i<2; i++){
            printf("%s ECE student ",ECE.ECE[i]);
            printf("\n");
        }
    }
    else if(strcmp(dept,"cse")==0){
        for(int i=0; i<2; i++){
            printf("%s CSE student",ECE.CSE[i]);
            printf("\n");
        }
    }
    else{
        printf("This department is not have in our collage");
    }
    return 0;
}