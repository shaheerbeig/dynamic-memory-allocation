#include<stdio.h>
#include<stdlib.h>

int main(){
	int r,c,i,j;
	printf("ENTER THE NUMBER OF ROWS \n");
	scanf("%d",&r);
	printf("ENTER THE NUMBER OF COLUMNS \n");
	scanf("%d",&c);
	
	int *arr[r];
	
	printf("enetr the numbers in array:\n");
	for(i=0;i<r;i++){
		arr[i]=(int *)malloc(c*sizeof(int));
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf(" %d ",arr[i][j]);
		}
	}
	for(i=0;i<r;i++){
		free(arr[i]);
	}
}