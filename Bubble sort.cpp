#include<stdio.h>
int main(){
	int arr[10],i,j,temp;
	for(i=0;i<10;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<9;i++){ // outer loop for passes
		for(j=0;j<(9-i);j++){ // inner loop for comparison
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
