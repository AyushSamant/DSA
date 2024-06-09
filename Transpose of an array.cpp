#include<stdio.h>
int main(){
	int arr[3][3];
	printf("Enter your array: \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("array[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	int t_arr[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			t_arr[j][i]=arr[i][j];
		}
	}
	printf("Transpose Matrix: \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",t_arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
