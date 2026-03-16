#include<stdio.h>
int add(int x,int y)
{
	return x+y;
}
int main()
{
	int a=10,b=20;
	int (*fp)(int ,int);
	fp=add;
	printf("%d",fp(a,b));
}
