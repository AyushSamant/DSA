#include<stdio.h>
#include<conio.h>
int main(){
	int arr[10];
	for(int i=0;i<10;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	int val;
	printf("Enter value to be searched in array: ");
	scanf("%d",&val);
	int i;
	for(i=0;i<10;i++){
		if(arr[i]==val){
			printf("\nValue exist at location: %d\n",i+1);
			break;
		}
	}
	if(i==10){
		printf("Value does not exist in the array");
		getch();
	}
	return 0;
}
