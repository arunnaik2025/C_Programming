#include<stdio.h>
#include<string.h>
void spacing(char str[]);
int main(){
    char str[100];
    fgets(str,100,stdin);
    spacing(str);
    return 0;
}
void spacing(char str[]){
    for(int i=0; str[i]!='\0';i++){
        if(str[i]==' '){
            continue;
        }
        printf("%c",str[i]);
    }
}