#include<stdio.h>
#include<math.h>

int main()
{
	int t,j;
	long unsigned l,u,c,i;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		scanf("%lu %lu",&l,&u);
		int sl,su;
		sl=sqrt(l);
		su=sqrt(u);
		c=0;
		for(i=sl;i<=su;i++)
		{
			if((i*i<=u)&&(i*i>=l))
				c++;
		}
		printf("%lu\n",c);
	}
	
	return 0;
}
