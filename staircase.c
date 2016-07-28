#include<stdio.h>

int main()
{
	int n,i,j,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	for(s=n-i;s>1;s--)
		printf(" ");	
	for(j=0;j<=i;j++)
		printf("#");
	printf("\n");
	}
	return 0;
}
