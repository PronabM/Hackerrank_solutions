#include<stdio.h>

int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		long n,x=0,y=0,c,j;
		scanf("%ld",&n);
		c=n/4;
		x=c*(-2);
		y=c*(-2);
		for(j=c*4;j<=n;j++)
		{
			switch(j%4)
			{
				case 1:
					x+=j;
					break;
				case 2:
					y+=j;
					break;
				case 3:
					x-=j;
					break;
				case 0:	
					y-=j;
			}
		}
		printf("%ld %ld\n",x,y);
	}
	return 0;
}

