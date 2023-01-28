//Write a program that creates an array of the size mentioned by user and ask user to fill in its
//elements. Ask user how many more elements he/she wants to enter in the array. Then insert as
//many elements as user mentions and then sort the newly created array and display it. You have to
//perform all this through dynamic memory allocation.

#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,m,n,j;
	int*ptr;
	int*fptr;
	
	printf("ENTER THE SIZE OF THE ARRAY \n");
	scanf("%d",&n);
	
	ptr=(int *)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++){
		printf("ENTER THE ELEMENT IN THE ARRAY \n");
		scanf("%d",&ptr[i]);
	}
	
	printf("HOW MANY MORE ELEMENTS YOU WANT TO ADD IN THE ARRAY ? \n");
	scanf("%d",&m);
	
	fptr=(int *)realloc(ptr,(m+n)*sizeof(int));
	for(i=n;i<m+n;i++){
		printf("ENTER THE ELEMENT IN THE ARRAY \n");
		scanf("%d",&ptr[i]);
	}
	printf("UNSORTED ARRAY IS \n");
	for(i=0;i<m+n;i++){
		printf(" %d ",ptr[i]);
	}
	int temp;
	for(i=0;i<m+n;i++){
		for(j=i+1;j<m+n;j++){
			if(ptr[i]>ptr[j]){
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
	}
	printf(" \n SORTED ARRAY IS \n");
	for(i=0;i<m+n;i++){
		printf(" %d ",ptr[i]);
	}
	
}