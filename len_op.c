#include <stdio.h>
int main(){
	char str[]="rohith";
	char *p=str;
	int len=0;
	while(*p!=NULL){
		p++;
		len++;
	}
	printf("%d",len);
}
