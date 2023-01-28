//C program to read and print the N student details using structure and Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>

int main(){

	struct user{
		char name[20];
		int marks;
	};
	int i,n;
	printf("enter the number of records you want to enter \n");
	scanf("%d",&n);
	
	struct user details[n];
	
	struct user *ptr;
	
	ptr=(struct user*)malloc(5*sizeof(struct user));
	
	for(i=0;i<n;i++){
		printf("enter the student name \n");
		scanf("%s",(ptr +i )->name);
		printf("enter the student marks \n");
		scanf("%d",&(ptr + i)->marks);
	}
		for(i=0;i<n;i++){
			printf("%s %d \n",(ptr + i )->name,(ptr + i )->marks);
		
	}
	free(ptr);
}+-