#include<stdio.h>
#include<string.h>
int main(){
    FILE*fpter;
    fpter=fopen("Arunnaik.txt","r");
    char ch;
    ch=fgetc(fpter);
    while(ch !=EOF){
        printf("%c",ch);
        ch=fgetc(fpter);
    }
   // printf("\n");
    fclose(fpter);
}