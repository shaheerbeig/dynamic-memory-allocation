#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int*ptr;
	int i,j,n;
	
	printf("ENTER THE NUMBER OF ELEMENTS IN THE ARRAY \n");
	scanf("%d",&n);
	
	ptr=(int*)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++){
		printf("ENTER THE NUMBER IN ARRAY \n");
		scanf("%d",&ptr[i]);
	}
	
	for(i=0;i<n;i++){
		printf("the value of element is %d \n",ptr[i]);
	}
	
	
	int*fptr;
	fptr=(int*)realloc(ptr,n*sizeof(int));
	
	printf("ENTER THE NUMBER OF ELEMENTS IN THE ARRAY \n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("ENTER THE NUMBER IN ARRAY \n");
		scanf("%d",&ptr[i]);
	}
	
	for(i=0;i<n;i++){
		printf("the value of element is %d \n",ptr[i]);
	}
	
	free(fptr);
}