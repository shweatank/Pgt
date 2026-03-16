#include<stdio.h>
int main ()
{

	int n,count=0;
	printf("Enter n number :");
	scanf("%d",&n);
	while(n!=0)
	{
		if(n & 1)
		{ 
			count++;
		}
	//	else
		{
			n=n>>1;
		}
	}
	printf("Number of Set Bit : %d\n",count);
}
