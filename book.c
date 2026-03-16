#include <stdio.h>
#include<string.h>
struct book{
	int book_id;
	char title[20];
	int price;
};
int main(){
	struct book BK[5];
	for(int i=0;i<5;i++){
		printf("enter bookid %d",i+1);
		scanf("%d",&BK[i].book_id);
		printf("enter title:");
		scanf("%s",BK[i].title);
		printf("enter price:");
		scanf("%d",&BK[i].price);
	}
	int highestprice=0;
	char highesttitle[20];
	int highestbook_id;
	for(int i=0;i<5;i++){
		if(BK[i].price > highestprice){

		        highestprice=BK[i].price;
			strcpy(highesttitle,BK[i].title);
			highestbook_id=BK[i].book_id;
		}
	}
	printf("%d\n",highestprice);
	printf("%s\n",highesttitle);
	printf("%d",highestbook_id);
}
