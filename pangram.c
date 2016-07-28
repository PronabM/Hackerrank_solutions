#include<stdio.h>

void pang(char *p)
{
	int i,j;
	int x[26];
	for(j=0;j<26;j++)
		x[j]=0;
	while(*p!='\0')
	{
		if((*p<91)&&(*p>64))
		{
			i=*p-'A';
			x[i]=1;	
		}
		if((*p<123)&&(*p>96))
		{
			i=*p-'a';
			x[i]=1;	
		}
		p++;	
	}
	for(j=0;j<26;j++)
		if(x[j]==0)
			break;
	if(j==26)
		printf("pangram");
	else
		printf("not pangram");		
}

int main()
{
	char s[1000];
	scanf("%[^\n]s",s);
	pang(s);
	return 0;
}
