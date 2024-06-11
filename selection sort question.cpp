#include<stdio.h>
/*Write a program that reads sales of MX number of salespersons in an array. 
Now display all the sales amounts in descending order. Use Selection sort logic.*/
int main(){
	int n;
	printf("Enter the size of array : \n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("array[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n-1;i++){
	for(int j=i+1;j<n;j++){
		if(arr[i]<arr[j]){
			int temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
