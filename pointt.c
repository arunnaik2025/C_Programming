/*#include<stdio.h>
int main(){
    int age,*p,**r;
    age=10;
    p=&age;
    r=&p;
    printf("%u\n",age);
    printf("%u\n",p);
    printf("%u\n",*p);
    printf("%u\n",r);
    printf("%u\n",*r);
    printf("%u",**r);
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int x,*p;
    x=25;
    p=&x;
    *p=50;
    printf("The value of x:%u",x);
    return 0;
}*/
#include<stdio.h>
int main(){
    int *a=10,*b=20;
    int *c;
    a=*b;
    b=*a;
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}