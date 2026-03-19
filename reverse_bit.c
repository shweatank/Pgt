#include <stdio.h>
int main(){
	int a=13;
	int c=0;
	while(a>0){
		int tem=a&1;
		c+=tem;
		a=a/2;
	
		printf("%d",tem);
}}
