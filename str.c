#include<stdio.h>
void name(char arr[]);
int length(char arr[]);
int main(){
    char name[100];
    printf("Enter a name:");
    fgets(name,100,stdin);
    printf("length of the string is %d\n",length(name));
}
int length(char arr[]){
    int count=0;
    for (int i=0; arr[i]!='\0'; i++){
        count++;
    }
    return count-1;
}
void name(char arr[]){
    for(int i=0; arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
}