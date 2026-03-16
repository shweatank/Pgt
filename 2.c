#include<stdio.h>
int add(int x,int y) { return x+y; }
int mul(int x,int y) { return x*y; }
int sub(int x,int y) { return x-y; }
int mod(int x,int y) { return x%y; }
int div(int x,int y) {return x/y;  }

int main()
{
	int a=10,b=20;
	int (*fp)(int ,int);
	fp=add;
	printf("Addition :%d\n",fp(a,b));
	fp=sub;
        printf("Subtraction : %d\n",fp(a,b));
	fp=mul;
        printf("Multiplication %d\n",fp(a,b));
	fp=div;
        printf("Division :%d\n",fp(a,b));
	fp=mod;
        printf("Module : %d\n",fp(a,b));

return 0;
}
