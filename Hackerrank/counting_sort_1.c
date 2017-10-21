#include<stdio.h>

int main()
{
	int ar[100],j;
	long n,i;
	scanf("%ld",&n);
	long a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<100;i++)
		ar[i]=0;
	for(i=0;i<n;i++)
	{
		j=a[i];
		ar[j]+=1;
	}
	for(i=0;i<n;i++)
		printf("%d ",ar[i]);
	return 0;				
}
