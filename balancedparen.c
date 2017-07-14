#include<stdio.h>
# include<conio.h>
# include<string.h>
# define MAX 20
# define true 1
# define false 0
int top=-1;
int stack[MAX];
push (char);
char pop();
main()
{
	char exp[MAX],temp;
	int i,valid=true;
	
	printf("enter the algebaic exp");
	scanf("%s",&exp);
	for(i=0;i<strlen(exp);i++)
	{
		if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
		push(exp[i]);
		if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
		if (top==-1)
		valid=false;
		else
		{
			temp=pop();
			if(exp[i]==')'&& (temp=='{'||temp=='['))
			valid=false;
			if(exp[i]=='}'&&(temp=='('||temp=='['))
			valid=false;
			if(exp[i]==']'&&(temp=='('||temp=='{'))
			valid=false;
			
		}
		
	}
	if(top>=0)//stack not empty(stack should be empty for balanced parenthesis
	valid=false;
	if(valid=true)
	printf("valid expression");
	else
	printf("invalid expression");
	
	
	
}
push(char x)
{
	if(top==(MAX-1))
	printf("stack overflow");
	else
	{
		top++;
		stack[top]=x;
	}
}
char pop()
{
	if(top==-1)
	printf("stack empty");
	else
	return(stack[top--]);
}
