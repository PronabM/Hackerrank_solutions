#include<stdio.h>



int main()
{
	long unsigned n,i,min=10000000,temp,j;
	scanf("%lu",&n);
	long a[n];
	for(i=0;i<n;i++)
		scanf("%ld",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		if(a[i+1]-a[i]<min)
			min=a[i+1]-a[i];
	j=0;			
	for(i=0;i<n;i++)
	{
		if(a[i+1]-a[i]==min)
		{
			if(j!=0)
			printf(" ");
			printf("%ld %ld",a[i],a[i+1]);
			j++;
		}
	}				
}
