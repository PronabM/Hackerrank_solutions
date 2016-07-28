#include<stdio.h>

int main()
{
	int i,j,k,n,m,s,z=0,max,count,ts;
	scanf("%d %d",&n,&m);
	s=n*(n-1)/2;
	char a[n][m+1],b[s][m+1];
	
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
		a[i][m]='\0';
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n;j++)
		{
			k=0;
			while(a[i][k]!='\0')
			{
				if((a[i][k]=='1')||(a[j][k]=='1'))
					b[s][k]='1';
				else
					b[s][k]='0';
				z++;
				k++;		
			}
		}
	}
	for(i=0;i<s;i++)
		for(j=0;j<m+1;j++)
		printf("%c",b[i]);		
	return 0;
}
