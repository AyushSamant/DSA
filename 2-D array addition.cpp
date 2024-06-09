#include<stdio.h>
int main(){
	int arr1[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("arr1[%d][%d] = ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("The array 1 is : \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	int arr2[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("arr2[%d][%d] = ",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("The array 2 is : \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	int sum[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			sum[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	printf("The addition array is : \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
