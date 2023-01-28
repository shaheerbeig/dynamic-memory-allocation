#include<stdio.h>
#include<stdlib.h>
int main(){
	
	char *ptr;
	
	ptr=(char *)calloc(5,sizeof(char));
	
	printf("enter your name \n");
	scanf("%s",ptr);
	
	printf("your name: %s",ptr);

}