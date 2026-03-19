#include<stdio.h>
int main(){
	int arr[4]={2,3,4,5};
	int flag=0;
	int value;
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<4;i++){
		if((arr[i]^i+1)!=0){
			value=i+1;
			flag=1;
			break;

		}

	}
	if(arr[0]>0 && flag==0){
		value=arr[size-1]+1;
	}
	else if(arr[0]>1 && flag==0){
		value=1;
	}
	printf("%d",value);

}

