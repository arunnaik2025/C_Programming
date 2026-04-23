#include<stdio.h>
#include<string.h>
struct vector{
    int x;
    int y;
};
void vectros(struct vector v1,struct vector v2,struct vector sum);
int main(){
    struct vector v1={5,10};
    struct vector v2={2,3};
    struct vector sum={0};

    vectros(v1,v2,sum);
}
void vectros(struct vector v1,struct vector v2,struct vector sum){
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;

    printf("The vector of x is:%d\n",sum.x);
    printf("The vector of y is:%d",sum.y);
}