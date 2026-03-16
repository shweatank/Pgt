#include <stdio.h>

int add(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int mul(int a,int b){
	return a*b;
}
int div(int a,int b){
	return a/b;
}

int main(){
	int (*p[4])(int,int)={add,sub,mul,div};
	int a,b,op;
	printf("enter a,b and operator: ");
	scanf("%d%d%d",&a,&b,&op);
	if(op==0)
		printf("%d",p[0](a,b));
	else if(op==1)
		printf("%d",p[1](a,b));
	else if(op==2)
		printf("%d",p[2](a,b));
	else if(op==3)
		printf("%d",p[3](a,b));
}
