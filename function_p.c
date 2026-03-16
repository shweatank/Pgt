#include<stdio.h>

int add(int a,int b){
	int c=a+b;
	return c;
}
int main(){
	int (*p)(int,int)=add;
	int res=p(10,20);
	printf("%d",res);
}
