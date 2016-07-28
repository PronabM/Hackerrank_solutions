#include<stdio.h>

int main()
{
	int a,b,n;
	long unsigned c=0;
	scanf("%d %d %d",&a,&b,&n);
	while(n-2)
	{
		c=b*b+a;
		a=b;
		b=c;
		n--;
	}
	printf("%lu",c);
	return 0;
}
