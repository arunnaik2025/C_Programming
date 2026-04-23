#include<stdio.h>
void alpha(char *p1,char *p2);
int main(){
    char a='a';
    char z='z';
    alpha(&a,&z);
    return 0;
}
void alpha(char *p1,char *p2){
    for(char i=*p1; i<=*p2; i++){
        printf("%c\n",i);
    }
}