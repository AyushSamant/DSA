#include<stdio.h>
#include<conio.h>
int main(){
	int arr[10],lft=0,rt=9,mid=(lft+rt)/2,i,val;
	printf("Enter array elements: \n");
	for(i=0;i<10;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("The array is: \n");
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	printf("\nEnter the value to be searched: \n");
	scanf("%d",&val);
	while(lft<=rt){
		if(val>arr[mid])
			lft=mid+1;
		
		else
		if(val<arr[mid])
			rt=mid-1;
		
		else{
			printf("Found at location number = %d",mid+1);
			break;
		}
		mid=(lft+rt)/2;
		if(lft>rt){
			printf("No such value exist in the array");
			getch();
		}
	}
}
