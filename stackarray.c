# include<stdio.h>
# define MAX_SIZE 101
int A[MAX_SIZE];
int top=-1;
void push(int x)
{

  if(top==MAX_SIZE-1)
{
	printf("stack overflow");
	return;
}
  top++;
  A[top]=x;
  
}
   
   void pop()
   {
   	if (top==-1)
   	{
   		printf("no element to pop");
	   }
	   top--;
   }
     
     
	   
	int main()
	{
		push(2);
		print();
		push(5);
		print();
		push(10);
		pop();
	   }
	   
	void print()
	{
	
	int i;
	printf("stack");
	for(i=0;i<=top;i++)
	printf("%d",A[i]);
	printf("\n");
	
}
	    

