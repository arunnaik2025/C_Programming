#include<stdio.h>
#include<math.h>
float percentage(float a,float b,float c,float d);
int main(){
    float a,b,c,d,result;
    printf("Enter a marks:");
    scanf("%f",&a);
     //if (a<35){
     //   printf("fail");
    //}
    printf("Enter a marks:");
    scanf("%f",&b);
    printf("Enter a marks:");
    scanf("%f",&c);
    printf("Enter a marks:");
    scanf("%f",&d);
    float marks=percentage(a,b,c,d);
    printf("percentage is:%f\n",marks);
    return 0;
}
float percentage(float a,float b, float c, float d){
    if (a<35){
        printf("fail a subject\n");
    }
    if(b<35){
        printf("fail b subject\n");
    }
    if(c<35){
        printf("fail c subject\n");
    }
    if(d<35){
        printf("fail d subject\n");
    }
    float marks=((a+b+c+d)/400)*100;
    return marks;
}