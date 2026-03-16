#include<stdio.h>
int main ()
{

        int n,count=0;
	printf("Enter n number :");
	scanf("%d",&n);
	for(int i=sizeof(n)*8-1;i>=0;i--)
	{
		if(n & 0x1<<i)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		if(i%4==0)
		{
			printf(" ");
		}
	}
	printf("\nIn Hexa : %x\n",n);
}
