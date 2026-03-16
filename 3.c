#include<stdio.h>
int add(int x,int y) { return x+y; }
int mul(int x,int y) { return x*y; }
int sub(int x,int y) { return x-y; }
int mod(int x,int y) { return x%y; }
int div(int x,int y) {return x/y;  }

int main()
{
	int a,b;
	char ch;
	printf("Enter Input \nEX:1+2\n");
	scanf("%d%c%d",&a,&ch,&b);
	int (*fp)(int ,int);
	switch(ch)
	{
		case '+' :fp=add;    break;
		case '-' :fp=sub;    break;
		case '*' :fp=mul;    break;
		case '/' :fp=div;    break;
		case '%' :fp=mod;    break;
		default :printf("incorrect Input\n");	 
	}
	printf("Result=%d%c%d=%d",a,ch,b,fp(a,b));


return 0;
}
