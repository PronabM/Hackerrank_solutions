#include<stdio.h>

int SolveMeFirst(int a,int b)
{
	return(a+b);
}

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d",SolveMeFirst(x,y));
	return 0;
}
