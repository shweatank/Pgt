#include <stdio.h>


int main(){

	int size;
	printf("enter size:");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int *st=arr;
	int *end=arr + size - 1;
	while(st < end){
		int tem=*end;
		*end=*st;
		*st=tem;
		end--;
		st++;
	}
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
