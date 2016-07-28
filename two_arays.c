#include<stdio.h>

int main()
{
	int t,n,i,j;
	long unsigned k;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %lu",&n,&k);
		long unsigned a[n],b[n];
		for(j=0;j<n;j++)
			scanf("%lu",&a[j]);
		for(j=0;j<n;j++)
			scanf("%lu",&b[j]);
		for(j=0;j<n-1;j++)
			if(a[j+1]<a[j])
				a[j+1]=a[j];
		for(j=0;j<n-1;j++)
			if(b[j+1]<a[j])
				b[j+1]=b[j];
		if(a[n-1]+b[n-1]>=k)
			printf("YES\n");
		else
			printf("NO\n");					
	}
}
