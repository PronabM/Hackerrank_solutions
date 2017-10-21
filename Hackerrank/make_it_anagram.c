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
		x1[i]+=1;	
		p++;	
	}
	while(*q!='\0')
	{
		i=*q-'a';
		x2[i]+=1;	
		q++;	
	}	
}

int main()
{
	int i,count=0;
	char a[10001],b[10001];
	scanf("%s",a);
	scanf("%s",b);
	countc(a,b);
	for(i=0;i<26;i++)
	{
		if(x1[i]>x2[i])
			count+=(x1[i]-x2[i]);
		else if(x1[i]<x2[i])
			count+=(x2[i]-x1[i]);
	}
	printf("%d",count);
	return 0;
}
