#include<stdio.h>
int main(){
    FILE*fptr;
    fptr=fopen("file.txt","r");
    int a;
    fscanf(fptr,"%d",&a);
    printf("Number=%d\n",a);
    fscanf(fptr,"%d",&a);
    printf("Number=%d\n",a);
    fscanf(fptr,"%d",&a);
    printf("Number=%d\n",a);

    //fclose(fptr);
    return 0;
}