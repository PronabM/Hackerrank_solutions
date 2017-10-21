#include<stdio.h>

int x1[26],x2[26];
	
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

void ang(char *p,int l)
{
	int i,j,z=0,c=0;
	for(j=0;j<26;j++)
		x1[j]=x2[j]=0;
	while(*p!='\0')
	{
		i=*p-'a';
		if(z<l)
			x1[i]+=1;
		else
			x2[i]+=1;		
		p++;
		z++;	
	}
	for(j=0;j<26;j++)
	{
		if(x2[j]>x1[j])
			c+=x2[j]-x1[j];
	}
	printf("%d\n",c);
}

int main()
{
	int i,t,l;
	char s[10001];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%s",s);
		l=len(s);
		if(l%2==0)
			ang(s,l/2);
		else
			printf("-1\n");	
	}
	return 0;
	
}
