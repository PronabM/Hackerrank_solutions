#include<stdio.h>

int c=0;

void insertionSort(int *j,int len)
{
	int i,t,l,k;	
	for(i=1;i<len;i++)
	{
		l=j[i];
		for(k=i-1;((k>=0)&&(l<j[k]));k--)
		{
			j[k+1]=j[k];
			c++;
		}
		j[k+1]=l;	
	}
}

int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	c=0;
	insertionSort(a,n);	
	printf("%d\n",c);	
	return 0;			
}
