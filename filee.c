/*#include<stdio.h>
int main(){
    FILE*fpter;
    fpter=fopen("file.txt","a");
    fprintf(fpter,"%c",'M');
    fprintf(fpter,"%c",'a');
    fprintf(fpter,"%c",'n');
    fprintf(fpter,"%c",'g');
    fprintf(fpter,"%c",'0');
return 0;
}*/
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
    printf("\n");
    fclose(fpter);
    return 0;


}