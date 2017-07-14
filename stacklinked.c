# include<stdio.h>
# include<stdlib.h>
# include<limits.h>
struct node
{
	int data;
	struct node* link;
};
 struct node* top=NULL;
 void push(int x)
 
 {
 	struct node* temp=(struct node*)malloc(sizeof (struct node));
 	temp->data=x;
 	temp->link=top;
 	top=temp;
 	printf("element to be pushed to stack is %d\n",x);
 	
 }
 
   int pop()
   {
   	struct node* temp=top;
   	int y;
   	if(top==NULL)
   	{return;
	   }
	   temp=top;
	   top=top->link;
	   y=temp->data;

	   free(temp);
	   return y;

   }
   int main()
   {
   	struct node* temp=NULL;
   	push(10);
   	push(20);
    printf("%d is popped from stack\n ",pop());
    push(30);
   	
   	
   }


