//reverse a string using
#include<stdio.h>
int main()
{
	char str[10];
	char str2[10];
	int len=0,i=0,j=0;
	printf("Enter string : ");
	scanf(" %s",str);
//	char *ptr=str;
	while(str[len]!='\0')
	{
	 len++;
	}
for(int i=len;i>=0;i--)
	printf("%c",str[i]);
return 0;
}
