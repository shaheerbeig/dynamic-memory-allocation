#include<stdio.h>
#include<stdlib.h>
//int asscendin(int , int);
//int dessecding(int , int);
//int swap(int * , int *);

int main(){
	int r,c,i,j,k,temp;
	int **a;
	printf("enter the number of rows and columns \n");
	scanf("%d %d",&r,&c);
	
	a=(int **)malloc(r*sizeof(int *));
	
	for(i=0;i<r;i++){
		a[i]=(int *)malloc(c * sizeof(int *));
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&*(*(a+i)+j));
		}
	}
		for(k=0;k<r;k++){
			for(i=0;i<r;i++){
				for(j=i+1;j<c;j++){
					if(a[k][i]>a[k][j]){
						temp=a[k][i];
						a[k][i]=a[k][j];
						a[k][j]=temp;
					}
				}
			}
		}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	
}