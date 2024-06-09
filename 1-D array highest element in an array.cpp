#include<stdio.h>
//1-D array highest num among array elements
int main(){
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Value[%d]=",i);
		scanf("%d",&arr[i]);
	}
	int biggest=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>biggest){
			biggest=arr[i];
		}
	}
	printf("Biggest element = %d",biggest);
	return 0;
}
