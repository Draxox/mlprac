//bit stuffing and destuffing
#include<stdio.h>

int main(){
	int N=32;
	int arr[] = {0,0,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,0,0,1,1,1};
	int stuffed[2*N];
	int i=0, j=0;
	int count = 0;
	printf("Original bits: ");
	for(i=0; i<N; i++)
		printf("%d ", arr[i]);
	printf("\n");
	i=0;
	j=0;
	while(i<N){
		stuffed[j++] = arr[i];
		if(arr[i] == 1){
			count++;
			if(count == 5){
				stuffed[j++] = 0;
				count = 0;
			}
		}
		else
			count = 0;
		i++;
	}
	printf("Stuffed bits: ");
	for(i=0;i<j;i++){
		printf("%d ", stuffed[i]);
	}
	printf("\n");
	
	//destuff
	
	int destuffed[2*N];
	int k=0, l=0;
	count =0;
	k=0;l=0;
	while(k<j){
		destuffed[l++] = stuffed[k];
		if(stuffed[k] == 1){
			count++;
			if(count == 5){
				k++;
				count = 0;
			}
		}
		else
			count = 0;
		k++;
	}
	printf("Destuffed bits: ");
	for(i=0;i<l;i++){
		printf("%d ", destuffed[i]);
	}
	printf("\n");
}
