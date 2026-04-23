/*#include<stdio.h>
int main(){
    FILE*fpter;
    fpter=fopen("file.txt","r");
    int a;
    while( fscanf(fpter,"%d",&a)!=EOF){
        printf("%d\t",a);
    }
    fclose(fpter);
    return 0;
}*/
/*#include<stdio.h>
int main(){
    FILE*fpter;
    fpter=fopen("Arun.txt","w");
    char name[100];
    int age;
    float cgpa;
    printf("Enter a name:");
    scanf("%s",name);
    printf("Enter a age of student:");
    scanf("%d",&age);
    printf("Enter cgpa:");
    scanf("%f",&cgpa);
    
    fprintf(fpter,"student name is:%s\n",name);
    fprintf(fpter,"Student age is:%d\n",age);
    fprintf(fpter,"Student cgpa is:%f",cgpa);

    fclose(fpter);
    return 0;
}*/
#include<stdio.h>
int main(){
    FILE*spter;
    spter=fopen("sum.txt","r");
    int a;
    fscanf(spter,"%d",&a);
    int b;
    fscanf(spter,"%d",&b);
    fclose(spter);
    spter=fopen("file.txt","w");
    fprintf(spter,"%d",a+b);
    fclose(spter);
    return 0;
}