#include<stdio.h>
int main()
{
	int n,count=0;;
	printf("Enter n Value :");
	scanf("%d",&n);
/*	while(n)
	{
		n=(n & n-1);
		count++;
	}*/
   	if(n &( n-1))
	{
		printf("Given Number is not Power Of 2\n");
	}
	else
	{
		printf("Given number is Power Of 2\n");
	}
return 0;
}
