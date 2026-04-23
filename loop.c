#include<stdio.h>
#include<string.h>
int counting(char str[]);
int main(){
    char str[100];
    scanf("%s",str);
    printf("%d",counting(str));
    return 0;
}
int counting(char str[]){
    int max=0;
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        for(int j=0; str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
            }
        }
            if(count>max){
                max = count;
            }
    }
    return max;
}