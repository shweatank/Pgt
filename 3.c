//call back function using pointers
#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int main()
{
	int x=10,y=20;
	int (*fp)(int ,int)=add;
	printf("%d",fp(x,y));
	return 0;
}
