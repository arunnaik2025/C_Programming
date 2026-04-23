#include<stdio.h>
#include<string.h>
void vowels(char str[]);
int main(){
    char str[100];
    scanf("%s",str);
    vowels(str);
    puts(str);
    return 0;
}
void vowels(char str[]){
    for(int i=0; str[i]!='\0';i++){
        if(str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o'||str[i]=='u'){
            str[i]=str[i]-32;
            return;
        }
    }
}
