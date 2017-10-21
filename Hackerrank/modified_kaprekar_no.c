#include<stdio.h>

int main()
{
	int k,c=0;
	long unsigned sum=0,i,l,u;
	long unsigned int sq;
	scanf("%lu",&l);
	scanf("%lu",&u);
	for(i=l;i<=u;i++)
	{
		if(i<10)
		k=10;
		else if(i<100)
		k=100;
		else if(i<1000)
		k=1000;
		else if(i<10000)
		k=10000;
		else if(i<100000)
		k=100000;
		sq=i*i;
		if((sq/k!=0))
		sum=sq%k+sq/k;
		if((sq==i)||(sum==i))
		{
			printf("%d ",i);
			c++;
		}
	}
	if(c==0)
		printf("INVALID RANGE");
	return 0;	
}
