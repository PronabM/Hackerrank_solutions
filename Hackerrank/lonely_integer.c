#include<stdio.h>

int main()
{
	int i,j,n,count;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	if(n==1)
		printf("%d",a[0]);
	else
	{		
		for(i=0;i<n;i++)
		{
			count=0;
			for(j=0;j<n;j++)
			{
				if(a[i]==a[j])
					count++;		
			}
			if(count==1)
			{
				printf("%d",a[i]);
				return 1;	
			}	
				
		}
	}
	return 0;
}
