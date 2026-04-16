#include<stdio.h>
int main()
{
	int d1[8],d2[8],d3[8],d4[8],sum[8],cy=0,i,t[8]={0},res[8],flag=0;
	printf("Enter the data 1:");
	for(i=0;i<8;i++)
	{
		scanf("%d",&d1[i]);
	}
	printf("Enter the data 2:");
	for(i=0;i<8;i++)
	{
		scanf("%d",&d2[i]);
	}
	printf("Enter the data 3:");
	for(i=0;i<8;i++)
	{
		scanf("%d",&d3[i]);
	}
	printf("Enter the data 4:");
	for(i=0;i<8;i++)
	{
		scanf("%d",&d4[i]);
	}
	for(i=7;i>=0;i--)
	{
			sum[i]=(d1[i]+d2[i]+d3[i]+d4[i]+cy)%2;
			cy=(d1[i]+d2[i]+d3[i]+d4[i]+cy)/2;
			
	}
	for(i=7;cy!=0;i--)
	{
		t[i]=cy%2;
		cy=cy/2;
	}
	cy=0;
	for(i=7;i>=0;i--)
	{
			res[i]=(sum[i]+t[i]+cy)%2;
			cy=(sum[i]+t[i]+cy)/2;
			
	}
	for(i=0;i<8;i++)
	{
		if(res[i]==0)
			res[i]=1;
		else
			res[i]=0;
	}
	printf("\nCheckSum is: ");
	for(i=0;i<8;i++)
	{
		printf("%d ",res[i]);
	}
	//receiver end
	if(d2[2]==0)
		d2[2]=1;
	else
		d2[2]=0;
	for(i=7;i>=0;i--)
	{
			sum[i]=(d1[i]+d2[i]+d3[i]+d4[i]+res[i]+cy)%2;
			cy=(d1[i]+d2[i]+d3[i]+d4[i]+res[i]+cy)/2;
			
	}
	for(i=7;cy!=0;i--)
	{
		t[i]=cy%2;
		cy=cy/2;
	}
	cy=0;
	for(i=7;i>=0;i--)
	{
			res[i]=(sum[i]+t[i]+cy)%2;
			cy=(sum[i]+t[i]+cy)/2;
			
	}
	for(i=0;i<8;i++)
	{
		if(res[i]==0)
			res[i]=1;
		else
			res[i]=0;
	}

	for(i=0;i<8;i++)
	{
		
		if(res[i]==1){
		
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("\nError occure");
	else
		printf("\nNo Error ");
	
	
}
