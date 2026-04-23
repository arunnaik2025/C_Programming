#include<stdio.h>
int main(){
    int addhar[5];
    int *ptr=&addhar[0];
    for(int i=0;i<5;i++){
        printf(" %d index:",i);
        scanf("%d addhar value:",&addhar[i]);
        //printf("%d output:",i,addhar[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d output:%d\n",i,addhar[i]);
    }
    return 0;
}