#include<stdio.h>
#include<string.h>
void slicing(char str[],int m,int n);
int main(){
    char str[100];
    scanf("%s",str);
    slicing(str,1,6);
    return 0;
}
void slicing(char str[],int m,int n){
    char newstr[200];
    int j=0;
    for(int i=m; i<=n; i++,j++){
        newstr[j]=str[i];
    }
    newstr[j]='\0';
    puts(newstr);
}