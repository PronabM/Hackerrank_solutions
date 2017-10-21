#include<stdio.h>

int ac(char *p)
{	
	int i,l=0;
	while(*p!='\0')
	{
		l++;
		p++;
	}
	return(l);	
}

int main()
{
	int t,i,j,len,c;
	scanf("%d",&t);
	char s[100001];
	for(i=0;i<t;i++)
	{
		scanf("%s",s);
		len=ac(s);
		c=0;
		for(j=0;j<len-1;j++)
		{
			if(s[j]==s[j+1])
				c++;
		}
		printf("%d\n",c);
	}
	return 0;
}
