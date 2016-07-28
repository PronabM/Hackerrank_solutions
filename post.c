#include<stdio.h>

char stack[50];
int top=-1;
int prior(char ch)
{
	switch(ch)
	{
		case '+':
		case '-':
			return(2);
		case '*':
		case '/':
			return(5);
		case '^':
			return(6);
		case '(':
			return(1);	 		
	}
}

int isop(char ch)
{
	if((ch>97)&&(ch<123))
		return(1);
	else
		return(0);	
}

void push(char x)
{
	if(top!=49)
	{
		top++;
		stack[top]=x;
	}
	else
		printf("Full");
}

char pop()
{
	if(top!=-1)
		top--;
	return(stack[top+1]);	
}

int main()
{
	char infix[50],postfix[50];
	int i=0,len,j=0;
	scanf("%s",infix);
	len = strlen(infix);
	for(i=0;i<len;i++)
	{
		if(isop(infix[i]))
			postfix[j++]=infix[i];
		else{
			if(infix[i]=='(')
				push(infix[i]);
			else if(infix[i]==')')
			{
				while(stack[top]!='(')
					postfix[j++]=pop();
				pop();		
			}
			else{
				while(prior(infix[i])<=prior(stack[top]))
					postfix[j++]=pop();
				push(infix[i]);	
			}		
		}	
	}
	while(top!=-1)
	
		postfix[j++]=pop();
	postfix[j++]='\0';
	printf("%s",postfix);
	
}
