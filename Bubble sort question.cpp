#include<stdio.h>
/*Write a program that reads random values into an array. Perform bubble sort in such a way 
that if the array is sorted in less than n-1 passes, then the rest of the passes should be discarded.*/
int main(){
	int arr[10],i,j,flag=0;
	printf("Enter the array : \n");
	for(i=0;i<10;i++){
		printf("array[%d] = ",i);
		scanf("%d",arr[i]);
	}
	for(i=0;i<9;i++){ // outer loop for passes
		for(j=0;j<(9-i);j++){ // inner loop for comparisons
			if(arr[j]>arr[j+1]){// interchange if condition is true 
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;// make the value of flag 1 indicating that interchanging took place in the current pass 
			}
		}
		if(flag==0){ /* no interchanging took place in the pass just concluded
	thus indicating that array has turned sorted, no need to go for more passes */
			break;
		}else{
			flag=0; // reinitialising value of flag with 0
		}
	}
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
