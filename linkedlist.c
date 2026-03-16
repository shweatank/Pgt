#include<stdio.h>
#include <stdlib.h>
struct node{
	int data;
        struct node *link;
};
void  create_node(int new_data){
	struct node *new=malloc(sizeof(struct node));
	new->data=new_data;
	new->link=NULL;
	printf("%d ",new->data);

}

int main()
{
	create_node(10);
	create_node(20);

}
