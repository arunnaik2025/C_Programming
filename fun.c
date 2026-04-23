#include<stdio.h>
float squrearea(float side);
int main(){
    float side;
    printf("Enter a length");
    scanf("%f",&side);
    printf("Area of this is:%f",squrearea(side));
    return 0;
}
float squrearea(float side){
    return (side*side);
}