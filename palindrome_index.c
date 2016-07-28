#include<stdio.h>

int len(char *p)
{
	int i=0;
	while(*p!='\0')
	{
		i++;
		p++;
	}
	return(i);
}

int main()
{
	char s[100006];
	int i,l,u,t,j;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		scanf("%s",s);
		l=len(s);
		u=l-1;
		l=0;
		while(u>l)
		{
			if((s[u]!=s[l])&&(s[u]==s[l+1]))
			{
				printf("%d\n",l);
				break;
			}	
				
			else if((s[u]!=s[l])&&(s[l]==s[u-1]))
			{
				printf("%d\n",u);
				break;
			}
			u--;
			l++;	
		}
		if(u<=l)
		printf("-1\n");
	}
	
	return 0;	
}
