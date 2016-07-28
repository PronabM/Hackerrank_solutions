#include<stdio.h>
#include<string.h>

int main()
{
	int t,k,f=0;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		int r1,c1,i,r,c,count,j;
		scanf("%d %d",&r,&c);
		char a[r][c+1];
		for(i=0;i<r;i++)
		{
			scanf("%81s",a[i]);
			a[i][c]='\0';	
		}	
		scanf("%d %d",&r1,&c1);
		char b[r1][c1+1];
		for(i=0;i<r1;i++)
		{
			scanf("%81s",b[i]);
			b[i][c1]='\0';	
		}	
		for(i=0;i<r;i++)
			printf("%s\n",a[i]);
		for(i=0;i<r1;i++)
			printf("%s\n",b[i]);	
		
	}
}
