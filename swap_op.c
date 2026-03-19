#include<stdio.h>
void swap(int *a,int *b){

	int tem=*b;
	*b=*a;
	*a=tem;
}
int main(){
	int x,y;
	printf("enter x and y values:");
	scanf("%d %d",&x,&y);
	int *a=&x;
	int *b=&y;
	swap(a,b);
	printf("%d %d",x,y);
}



