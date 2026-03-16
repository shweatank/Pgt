#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n;
	char result[10];
	
	printf("Enter no of digits :");
	scanf("%d",&n);

	sprintf(result,"%d",n);
	int count=strlen(result);
	printf("%d",count);
	return 0;
}
