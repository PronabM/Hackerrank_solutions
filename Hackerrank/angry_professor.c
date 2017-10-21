#include<stdio.h>

int main()
{
	int i,j,t,n,k,temp;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&n,&k);
		int a[n];
		temp=0;
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
			if(a[j]<=0)
				temp++;
		}
		if(k-temp>0)
			printf("YES\n");
		else
			printf("NO\n");	
	}
}
