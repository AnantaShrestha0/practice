#include<stdio.h>
int main(){
	int row,column,sum=0;
	float av;
	
	printf("Enter the row of array");
	scanf("%d",&row);
	printf("Enter the number of colome of array");
	scanf("%d",&column);
	int a[row][column];
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			scanf("%d",&a[row][column]);
		}
	}
	
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			printf("%d\t",a[row][column]);
		}
		printf("\n");
	}
	
	printf("sum\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			sum=a[row][column]+sum;
		}
	}
	printf("%d\n",sum);
	
	printf("avarage\n");
	av=sum/(row*column);
	printf("%f",av);
	
	
	
	return 0;
}
