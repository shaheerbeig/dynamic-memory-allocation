#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,n,m, *ptr, *ptr1;
	
	printf("ENTER THE NUMBER OF VALUE YOU WANT TO ENTER \n");
	scanf("%d",&n);
	
	ptr=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",(ptr + i));
	}
	
	for(i=0;i<n;i++){
		printf(" %d ",*(ptr + i));
	}
	
	printf("\nHOW MANY MORE VALES YOU WANT TO ENTER \n");
	scanf("%d",&m);
	
	ptr1=(int *)realloc(ptr,m*sizeof(int));
	
	for(i=n;i<m;i++){
		scanf("%d",(ptr1 + i));
	}
	
	for(i=0;i<m;i++){
		printf(" %d ",*(ptr1 + i));
	}
	free(ptr1);
}