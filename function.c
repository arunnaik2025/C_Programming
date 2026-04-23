#include<stdio.h>
void namaste();
void bonjur();
int main(){
    char ch;
    printf("Enter a f o i:");
    scanf("%c",&ch);
    if(ch=='i'){
        namaste();
    }
    else if(ch=='f'){
        bonjur();
    }
    else{
        printf("not valid");
    }
    return 0;
}
void namaste(){
    printf("namaste\n");
}
void bonjur(){
    printf("bonjur\n");
}