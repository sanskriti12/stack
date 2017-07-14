
//Evaluation of postfix expression..

# include<stdio.h>
# include<conio.h>
# include<string.h>
void main()
{
	char s[80];
	int i,n,top=-1,x=0,y=0,stack[80];
	printf("enter the postfix exp");
	scanf("%s",&s);
	n=strlen(s);
	printf("value of postfix notation is");
	for(i=0;i<n;i++)
	{
		switch(s[i])
		{
			case '+':
				y=stack[top];
				x=stack[top-1];
				top--;
				x=x+y;
				stack[top]=x;
				break;
			case '-':
				y=stack[top];
				x=stack[top-1];
				top--;
				x=x-y;
				stack[top]=x;
				break;
		    case '*':
		    	y=stack[top];
				x=stack[top-1];
				top--;
				x=x*y;
				stack[top]=x;
				break;
			case '/':
				y=stack[top];
				x=stack[top-1];
				top--;
				x=x/y;
				stack[top]=x;
				break;
			default:
				top++;
				if(s[i]>=48 && s[i]<=57)
				x=s[i]-48;
				stack[top]=x;
				x=0;
				
				
		}
		
	}
	   printf("%d",stack[top]);
}
