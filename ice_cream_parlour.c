#include<stdio.h>

int main()
{
	int i,j,k,t,m,n,f;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&m);
		scanf("%d",&n);
		int a[n];
		for(j=0;j<n;j++)
			scanf("%d",&a[j]);
		f=1;	
		for(j=0;(j<n)&&(f);j++)
			for(k=1;k<n;k++)
				if((a[j]+a[k]==m)&&(j!=k))
				{
					printf("%d %d\n",j+1,k+1);
					f=0;
					break;	
				}	
	}
	return 0;
}
