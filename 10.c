#include<stdio.h>
int main()
{
	char str[10];
	char *p;
	int i=0;
	printf("enter string");
	scanf("%s",str);
	p=str;
	while(*(p+i)!='\0')
	{
		i++;

	}
		for(int j=i-1;j>=0;j--)
		{
			printf("%c",*(p+j));
		}

	return 0;
}
