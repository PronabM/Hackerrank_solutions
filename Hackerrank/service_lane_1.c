#include<stdio.h>

int main()
{
	long n,i,en,ex,k;
	int t,min;
	scanf("%ld %d",&n,&t);
	int w[n];
	for(i=0;i<n;i++)
		scanf("%d",&w[i]);
	for(i=0;i<t;i++)
	{	
		min=4;
		scanf("%d%d",&en,&ex);
		for(k=en;k<=ex;k++)
		{
			if(w[k]<min)
				min=w[k];
			if(min==1)
				break;	
		}
		printf("%d\n",min);	
	}
	return 0;	
}
