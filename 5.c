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
	int option;
	printf("enter your option except '0'");
	scanf("%d",&option);
	switch(option)
	{
		case 1:fp=add;break;
		case 2:fp=sub;break;
		case 3:fp=mul;break;
	}
	printf("%d\n",fp(x,y));
	return 0;
}
