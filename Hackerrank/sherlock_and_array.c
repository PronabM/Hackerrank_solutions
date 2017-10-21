#include<stdio.h>

int main()
{
	int t,n,i,j,ls,k,ts;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		int a[n];
			ts=0;
			for(j=0;j<n;j++)
			{	
				scanf("%d",&a[j]);
				ts+=a[j];
			}
		if(n==1)
		{
			printf("YES\n");
		}
		else
		{
			for(j=1;j<n-1;j++)
			{
				ls=0;
				if((ts-a[j])%2==0)
				{
					for(k=0;k<j;k++)
						ls+=a[k];	
					if(ls==(ts-a[j])/2)
					{
						printf("YES\n");
						break;
					}
					
				}
			}
			if(j==n-1)
				printf("NO\n");
		}	
			
	}
}
