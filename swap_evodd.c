#include<stdio.h>
#define even 0xAAAA
#define odd 0x5555
int main()
{
	int n;
	printf("Enter Number :");
	scanf("%d",&n);
	n=((n & even) >>1) | ((n & odd ) <<1);
	printf("%d",n);


}
