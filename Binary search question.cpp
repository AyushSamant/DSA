//Write a program that searches a value from an array, elements of which are in descending order, using binary search .
#include<stdio.h>
#include<conio.h>
int main(){
	int arr[10],i,val,lft=0,rt=9,mid=(lft+rt)/2;
	printf("Enter the array: \n");
	for(i=0;i<10;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nenter the value to be searched: ");
	scanf("%d",&val);
	while(lft>=rt){
		if(val>arr[mid])
			lft=mid+1;
		else
		if(val<arr[mid])
			rt=mid-1;
		else{
			printf("value found at location = %d",mid+1);
			break;
		}
		mid=(lft+rt)/2;
		if(lft>rt){
			printf("No value exist");
			getch();
		}
	}
}
