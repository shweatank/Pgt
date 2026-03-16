//calculator programe using function pointer
#include<stdio.h>
int add(int a,int b)
{
return a+b;
}

int sub(int a,int b)
{ return a-b; }
int mul(int a,int b)
{ return a*b; }

int main()
{
	int x=10,y=20;
	int (*fp)(int ,int);
	fp=add;
	printf("%d\n",fp(x,y));
	fp=sub;
	printf("%d\n",fp(x,y));
	fp=mul;
	printf("%d\n",fp(x,y));
	return 0;
}
