#include<stdio.h>
#include<string.h>
int main(){
	int i=0;
	char str[100];
	printf("Enter a character:");
	fgets(str,sizeof(str),stdin);
	int len=strlen(str);
	for(i=len-1; i>=0; i--){
		printf("%c",str[i]);
	}
	return 0;
}