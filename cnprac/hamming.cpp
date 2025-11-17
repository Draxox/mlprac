//hamming code
#include<stdio.h>
int main(){
	int arr[11];
	int arr2[11];
	printf("\Enter the message to send: \n ");
	for(int i=10;i>=0;i--){
		if(i==7 || i==3 || i==1 || i==0)
			continue;
		scanf("%d ", &arr[i]);
	}
	arr[0]=arr[2] ^ arr[4] ^ arr[6] ^ arr[8] ^ arr[10];
	arr[1]=arr[2] ^ arr[5] ^ arr[6] ^ arr[9] ^ arr[10];
	arr[3]=arr[3] ^ arr[4] ^ arr[5] ^ arr[6];
	arr[7]=arr[8] ^ arr[9] ^ arr[10];
	
	printf("\Hamming Code: \t");
	for(int i=10;i>=0;i--){
		printf("%d ", arr[i]);
	}
	printf("\Enter the message of receiver End: \n");
	for(int i=10;i>=0;i--){
		scanf("%d ", &arr2[i]);
	}
	int flag=0;
	int error;
	for(int i=10;i>=0;i--){
		if(arr[i] != arr2[i]){
			flag=1;
			error=i+1;
			break;
		}
	}
	if(flag==1){
		printf("\n!! There is an error in%d bit!!", error);
	} else{
		printf("\n There is no error.");
	}
}
