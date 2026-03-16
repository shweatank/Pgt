//reverse an array using pointers
#include<stdio.h>
int main()
{
	int n;
	printf("enter no elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter elemenst \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int size=sizeof(arr)/sizeof(arr[0]);
	int *p=arr;
	for(int i=size-1;i>=0;i--)
	{
		printf("%d",*(p+i));
	}
}
