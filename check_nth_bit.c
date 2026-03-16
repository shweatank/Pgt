#include<stdio.h>
#define check num&(0x1<<pos)
int main()
{
	int num,pos;
	printf("Enter Num :");
	scanf("%d",&num);
	printf("Enter Position :");
	scanf("%d",&pos);

	if(check)
	{
		printf("Given bit is Set\n");
	}
	else 
	{
		printf("Given bit not set ");
	}
}
