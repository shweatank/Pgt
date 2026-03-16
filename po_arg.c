#include <stdio.h>
int add(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}

int cal(int a, int b,int (*p)(int,int)){
	return p(a,b);
}


int main(){
	int res;
	res=cal(10,20,add);
	printf("%d",res);
	res=cal(10,20,sub);
	printf("%d",res);
}
