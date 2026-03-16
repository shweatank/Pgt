#include<stdio.h>
//cal back function using function pointers

int add(int a, int b)
{
	return a+b;
}
void add_fun(int a,int b,int(*callback)(int ,int))
{
	printf("%d\n",callback(a,b));
}
int main()
{
	int x=10,y=20;
	add_fun(x,y,add);
	return 0;
}
