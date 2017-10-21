#include<stdio.h>

int main()
{
	int n,i,j=0,k=0,c=0;
	scanf("%d",&n);
	int ar[n],l[n],g[n];
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	for(i=0;i<n;i++)
	{
		if(ar[0]<ar[i])
		{
			g[k]=ar[i];
			k++;
		}
		else if(ar[0]>ar[i])
		{
			l[j]=ar[i];
			j++;
		}
		else
			c++;
	}
	for(i=0;i<j;i++)
		printf("%d ",l[i]);
	for(i=0;i<c;i++)
		printf("%d ",ar[0]);
	for(i=0;i<k;i++)
		printf("%d ",g[i]);			
}
