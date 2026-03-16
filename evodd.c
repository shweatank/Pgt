#include<stdio.h>
int main()
{
	int n;
	printf("Enter n Value :");
	scanf("%d",&n);
	if(n & 1)
	{
		printf("Given number is ODD");
	}
	else
	{
		printf("Given number is EVEN");
	}
}
