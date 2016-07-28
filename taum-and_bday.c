#include<stdio.h>

int main()
{
	int i,t;
	long unsigned int b,w,x,y,z,m=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lu %lu",&b,&w);
		scanf("%lu %lu %lu",&x,&y,&z);
		if(x+z<y)
		m=x*b+(x+z)*w;
		else if(y+z<x)
		m=w*y+(y+z)*b;
		else
		m=b*x+w*y;
		printf("%lu\n",m);
	}
}
