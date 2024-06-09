#include<stdio.h>
//Matrix multiplication
int main(){
	int arr1[3][3];
	int arr2[3][3];
	int sum=0;
	printf("Enter array 1: \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("arr1[%d][%d] = ",i,j);
			scanf("%d",&arr1[i][j]);
		}
		printf("\n");
	}
	printf("Enter array 2: \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("arr2[%d][%d] = ",i,j);
			scanf("%d",&arr2[i][j]);
		}
		printf("\n");
	}
	int mul[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int j1=0;j1<3;j1++){
				sum=sum+arr1[i][j1]*arr2[j1][j];
			}
			mul[i][j]=sum;
			sum=0;
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
