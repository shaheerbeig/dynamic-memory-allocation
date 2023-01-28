//C program to read a one dimensional array, print sum of all elements along with inputted array elements using Dynamic Memory Allocation0.

#include<stdio.h>
#include<stdlib.h>

int main(){
	int a[5]={1,2,3,4,5};
	int*ptr;
	int n,i;
	printf("Enter the total number of elements in the array \n");
	scanf("%d",&n);
	
	ptr=(int*)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++){
		printf("Enter the elements in the array \n");
		scanf("%d",&ptr[i]);
	}
	int total=0;
	for(i=0;i<n;i++){
		total=total + a[i] + ptr[i];	
	}
	
	printf("the total is %d",total);
	
}