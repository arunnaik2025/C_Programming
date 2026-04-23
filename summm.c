/*#include<stdio.h>
int main(){
    int sum=0;
    for(int i=5; i<=50; i++){
        sum=sum+i;
    }
    printf("sum of the number is:%d",sum);
    return 0;
}*/
/*#include<stdio.h>
int main(){
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
#include<stdio.h>
int main(){
    char a='*';
    int i=1;
    while(i<=4){
        i++;
        int j=1;
        while(j<=4){
            j++;
            printf("%c",a);
        }
        printf("\n");
    }
    return 0;
}