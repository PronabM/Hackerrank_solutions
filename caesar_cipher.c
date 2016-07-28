#include<stdio.h>

int main()
{
	int len,k,i,p;
	scanf("%d",&len);
	char s[len];
	scanf("%s",&s);
	scanf("%d",&k);
	while(k>=26)
	k-=26;
	for(i=0;i<len;i++)
	{	
		p=s[i];
		if((s[i]>=97)&&(s[i]<=122))
		{
			p+=k;
			if(p>122)
			p-=26;
			s[i]=p;
				
		}	
			
		else if((s[i]>=65)&&(s[i]<=90))
		{
			p+=k;
			if(p>90)
			p-=26;
			s[i]=p;
		}
	}	
	printf("%s\n",s);
	return 0;
}
