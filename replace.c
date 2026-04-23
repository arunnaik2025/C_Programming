#include<stdio.h>
#include<string.h>
void replace(char str[]);
int main(){
    char str[100];
    printf("Enter a sring:");
    fgets(str,100,stdin);
    replace(str);
    return 0;
}
void replace(char str[]){
    for(int i=0; str[i]!='\0';i++){
        if(str[i]>='a'&& str[i]<='z'){
            str[i]=str[i]^32;
        }
       printf("%c",str[i]);
    }
}