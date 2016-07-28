#include<stdio.h>

int x[26],indx=1;

void gem(char *p)
{
	int i,j;
	if(indx==0)
	for(j=0;j<26;j++)
		x[j]=0;
	while(*p!='\0')
	{
		i=*p-'a';
		if(indx==1)
		x[i]=indx+1;
		else
		{
			if(x[i]==indx)
			x[i]=indx+1;	
		}	
		p++;	
	}
	for(j=0;(j<26)&&(x[j]!=indx+1);j++)
		x[j]=0;
	indx++;		
}

int count()
{
	int j,c=0;
	for(j=0;j<26;j++)
		if(x[j]==indx)
			c++;
	return(c);				
}


int main()
{
	int n,i;
	char a[101];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a);
		gem(a);
	}
	printf("%d",count());
	return 0;
}
	
	

