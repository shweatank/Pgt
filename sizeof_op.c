#include<stdio.h>
int main()
{
	int count=0;
	char n=5;
	while(n)
	{
		count++;
		n=n<<1;
	}
	printf("Size of Data Type : %d",count/8);
}
