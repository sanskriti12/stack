# include<stdio.h>
# include<conio.h>
# include<string.h>
 
char stack[30];
int top=-1;
void infixtopostfix(char*);
void push(char);
char pop();
void main()
{
	char infix[30];
	printf("enter the infix exp");
	scanf("%s",&infix);
	infixtopostfix(infix);
}
void push(char x)
{
	if(top>=29)
	{
		printf("stack overflow");
		return;
		
	}
	else
	{
		top=top+1;
		stack[top]=x;
	}
	
}
char pop()
{
	char i;
	if(top==-1)
	{
		printf("\nstack is empty");
	}
	else
	{
		i=stack[top];
		top=top-1;
	}
	return i;
}
int prec(char ch)
{
	if(ch=='^')
	{
		return (5);
	}
	else if(ch=='*'||ch=='/')
	{
		return(4);
	}
	else if(ch=='+'||ch=='-')
	{
		return(3);
	}
	else
	{
		return(2);
	}
}
void infixtopostfix(char infix[])
{
	int length;
	char symbol,temp;
	static int index=0,j=0;
	length=strlen(infix);
	char postfix[50];
	while(index<length)
	{
		symbol=infix[index];
		switch(symbol)
		{
			case '(':push(symbol);
			         break;
			case ')':temp=pop();
			         while(temp!='(') 
					 {
					 	postfix[j]=temp;
					 	j++;
					 	temp=pop();
					}
					break;
			case '+':
			case '-':
			case '*':
			case '/':
			while(prec(stack[top])>=prec(symbol))
			{
				temp=pop();
				postfix[j]=temp;
				j++;
			}
			push(symbol);
			break;
			default:postfix[j++]=symbol;
			    
					break;
							        
		}
		index++;
	}
	while(top>=0)
	{
		temp=pop();
		postfix[j++]=temp;
		
	}
	postfix[j++]='\0';
	printf("the postfix exp is %s",postfix);
	return;
	
}
