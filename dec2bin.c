//decimal to binary conversion usng stack

# include<stdio.h>
# include<conio.h>
void main()
{
	int stack[30],n,rem,top=0;
	printf("enter decimal number");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%2;
		stack[top]=rem;
		
		n=n/2;
		top=top+1;
		
	}
	top--;
	printf("the equivalent binary number is");
	for(;top>0;top--)
	{
		printf("%d",stack[top]);
	}

	
		
	
}

