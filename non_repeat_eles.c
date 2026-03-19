#include<stdio.h>


int main(){
	int x,i,j;
	printf("enter size of Array");
	scanf("%d",&x);
	int arr[x];
	for(int i=0;i<x;i++){
		scanf("%d",&arr[i]);
	}
	int c=0;
	for(i=0;i<x;i++){
		int c1=0;
		for(j=0;j<x;j++){
			if(arr[i]==arr[j]){
				c1++;
			}
		}
		if(c1<2){
			printf("%d",arr[i]);
		}
	}
	
	
}
