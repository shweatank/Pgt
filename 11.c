//frequency of numbers !
#include<stdio.h>
int main()
{
	int n,size;
	printf("Enter no of elements :");
	scanf("%d",&n);
	int arr[n];
	int freq[50]={0};
	printf("Enter array of elements:");
	for(int i=0;i<n;i++)
	{  scanf("%d",&arr[i]); }

	//size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{  freq[arr[i]]++;  }

	for(int i=0;i<n;i++)
	{ 
		if(freq[arr[i]]!=0)
		{
			printf("%d is %d\n",arr[i],freq[arr[i]]);
			freq[arr[i]]=0;
		}

	}
	return 0;
}

