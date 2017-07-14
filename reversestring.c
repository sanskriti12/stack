//Reverse a string using stack..

# include<stdio.h>
# include<string.h>
# define MAX 20
int top=-1;//empty stack
char stack[MAX];
char pop();
push(char);
main()
{
	char str[20];
	int i;
	printf("enter the string");
	scanf("%s",&str);
	for(i=0;i<strlen(str);i++)
	push(str[i]);
	for(i=0;i<strlen(str);i++)
	str[i]=pop();
	printf("reverse string is %s",str);
	scanf("%s",str);
}

push(char x)
{
	if(top==MAX-1)
	printf("stack overflow");
	else
	stack[++top]=x;
}

char pop()
{
	if(top==-1)
	printf("stack empty");
	else
	return stack[top--];

}



