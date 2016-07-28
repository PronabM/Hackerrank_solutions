#include<stdio.h>

int x1[26],x2[26];
	
void countc(char *p, char *q)
{
	int i,j;
	for(j=0;j<26;j++)
		x1[j]=x2[j]=0;
	while(*p!='\0')
	{
		i=*p-'a';
		x1[i]=1;	
		p++;	
	}
	while(*q!='\0')
	{
		i=*q-'a';
		x2[i]=1;	
		q++;	
	}	
}

int main()
{
	int i,j,t;
	char a[100001],b[100001];
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		scanf("%s",a);
		scanf("%s",b);
		countc(a,b);
		for(i=0;i<26;i++)
		{
			if((x1[i]==x2[i])&&(x1[i]!=0))
			{
				printf("YES\n");
				break;
			}
		}
		if(i==26)
			printf("NO\n");
	}
	return 0;
}
