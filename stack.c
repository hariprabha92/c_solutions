#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
}*ptr,*top,*temp;
int item;
int push()
{
	
	 printf("enter the item to be inserted ");
         scanf("%d",&item);
         temp=(struct node*)malloc(sizeof(struct node));
         temp->data=item;
         temp->next=top;
         top=temp;
	 ptr=top;
	 p();
	 
	 return 0;
}
p()
{
	while(ptr!=NULL){
                                printf("%d\n",ptr->data);
                                ptr=ptr->next;
                        }

}
int pop()
{
	
                        if(top==NULL){
                                printf("underflow");
                        }
                        else {
                                item=top->data;
                                top=top->next;
                                printf("Stack after deleting %d is \n ",item);
                                ptr=top;
                               	p();
                                }
                

}
int main()
{
	int c,n;
	do{
		printf("Enter the your option 1.push \n 2.pop");
		scanf("%d",&c);
		if (c==1){
			push();
		}
		else if (c==2){
			pop();
		}
		else
			printf("incorrect entry");
		printf("Do you vant to continue 1.YES")	;
		scanf("%d",&n);
		}
		while(n==1);
	return 0;
}

			

			
	
	

	

