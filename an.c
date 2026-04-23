#include<stdio.h>
int main(){
    printf("Enter a day:");
    int day;
    scanf("%d",&day);
    //printf("%d",!((4>3) || (4<3))); 
    //printf("%d",a>9 && a<100);
    //return 0;
    switch(day){
        case 1:printf("monday\n");
            int food;
            printf("which food:");
            scanf("%d",&food);
            switch(food){
                case 1:printf("vegitarian");
            }
              break;
        case 2:printf("tuesday\n");
              break;
        case 3:printf("wednsday\n");
              break;
        case 4:printf("thurday\n");
              break; 
        default:printf("not valid");                       
    }
    return 0;
}