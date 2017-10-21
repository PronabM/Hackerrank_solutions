#include<stdio.h>

int main()
{
	int t,n,a,b,temp,c,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		scanf("%d",&a);
		scanf("%d",&b);
		if(a>b)
		{
			temp=a;
			a=b;
			b=temp;
		}
		if(a==b)
		printf("%d",a*(n-1));
		else
		{
			for(j=0;j<n;j++)
		{
			c=(n-1-j)*a+j*b;
			printf("%d ",c);
		}
		}
		printf("\n");
	}
	return 0;
}
