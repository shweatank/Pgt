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
		temp[arr[i]]++;
        }
	for(int i=0;i<n;i++)
	{
		if(temp[arr[i]] == 1)
		{
			printf("%d",arr[i]);break;
		}
	}
}
