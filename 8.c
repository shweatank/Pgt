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
	int arr2[n];
	int size=sizeof(arr)/sizeof(arr[0]);
	int *p=arr;
	int *p2=arr2;
	for(int i=0; i<size;i++)
	{
		*(p2+i)=*(p+i);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",arr2[i]);
	}
}
