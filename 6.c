  //function pointer inside structure

#include<stdio.h>
typedef struct cal
{
	int (*fp)(int ,int);
}stu;
int add(int a,int b)
{ return a+b; }

int main()
{   stu s;
	s.fp=add;
	printf("%d",s.fp(4,5));
	return 0;
}
