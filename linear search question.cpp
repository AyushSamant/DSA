#include<stdio.h>
int main(){
	int arr[10],val,i,count=0;
	printf("Enter the array elements: \n");
	for(i=0;i<10;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nThe array is: \n");
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	printf("\nEnter the value to be searched : ");
	scanf("%d",&val);
	for(i=0;i<10;i++){
		if(val==arr[i]){
			count=count+1;
			printf("The element is found at location: %d\n",i+1);
		}
	}
	printf("The number of occurence of element is : %d",count);
	return 0;
}
