#include<stdio.h>
#include<string.h>
typedef struct studentinformation{
    char student[100];
}stu;
typedef struct teacherinformation{
    char teacher[100];
}tea;
typedef struct staffinformation{
    char staff[100];
}sta;
void stud(stu details);
void teach(tea details1);
void staf(sta details2);
int main(){
    stu details[10];
    tea details1[5];
    sta details2[2];
    printf("Enter the student details:");
    for(int i=0; i<10; i++ ){
        scanf("%s",details[i].student);
    }
    printf("Enter the teacher details:");
    for(int i=0; i<5; i++){
        scanf("%s",details1[i].teacher);
    }
    printf("Enter the staff details:");
    for(int i=0; i<2; i++){
        scanf("%s",details2[i].staff);
    }
    printf("\n");
    for(int i=0; i<10; i++){
        stud(details[i]);
    }
    for(int i=0; i<5; i++){
        teach(details1[i]);
    }
    for(int i=0; i<2; i++){
        staf(details2[i]);
    }
    return 0;
}
void stud(stu details){
    printf("student details is=%s\n",details.student);
}
void teach(tea details1){
    printf("Teachers details is=%s\n",details1.teacher);
}
void staf(sta details2){
    printf("Staff detais is=%s\n",details2.staff);
}
