#include<stdio.h>

int main()
{
	int t,i,count,temp;
	long n,nc;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%ld",&n);
		nc=n;
		count=0;
		while(nc!=0)
		{
			temp=nc%10;
			if(temp!=0)
				if(n%temp==0)
					count++;
			nc/=10;		
		}
		printf("%d\n",count);
	}
}
