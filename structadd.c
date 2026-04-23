#include<stdio.h>
#include<string.h>
typedef struct address{
    int houseno;
    int blockno;
    char city[100];
    char state[100];
}add;
void printinfo(struct address adree);
int main(){
    add adree[5];
    printf("Enter the details of person 1:");
    scanf("%d",&adree[0].houseno);
    scanf("%d",&adree[0].blockno);
    scanf("%s",adree[0].city);
    scanf("%s",adree[0].state);

    printf("Enter the details of person 2:");
    scanf("%d",&adree[1].houseno);
    scanf("%d",&adree[1].blockno);
    scanf("%s",adree[1].city);
    scanf("%s",adree[1].state);

    printf("Enter the details of person 3:");
    scanf("%d",&adree[2].houseno);
    scanf("%d",&adree[2].blockno);
    scanf("%s",adree[2].city);
    scanf("%s",adree[2].state);

    printf("Enter the details of person 4:");
    scanf("%d",&adree[3].houseno);
    scanf("%d",&adree[3].blockno);
    scanf("%s",adree[3].city);
    scanf("%s",adree[3].state);

    printf("Enter the details of person 5:");
    scanf("%d",&adree[4].houseno);
    scanf("%d",&adree[4].blockno);
    scanf("%s",adree[4].city);
    scanf("%s",adree[4].state);

    printinfo(adree[0]);
    printinfo(adree[1]);
    printinfo(adree[2]);
    printinfo(adree[3]);
    printinfo(adree[4]);

    return 0;
}
void printinfo(struct address adree){
    printf("%d\n%d\n%s\n%s\n",adree.houseno,adree.blockno,adree.city,adree.state);
}