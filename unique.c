#include<stdio.h>
int main()
{
	int n;
	printf("Enter No Of Elements : 0");
	scanf("%d",&n);
	int arr[n];
	int temp[100]={0};
	printf("Enter array Of elements : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				arr[i]=arr[j];
			}
		}
		    temp[i]=arr[i];
	}
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		printf("%d",arr[i]);
	}
}
