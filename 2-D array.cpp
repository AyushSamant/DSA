#include<stdio.h>
//2-D array
int main(){
	int arr[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The array is : \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
