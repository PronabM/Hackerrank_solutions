#include<stdio.h>

int main()
{
	int t,i,small,l,u,j;
	long n;
	scanf("%d %d",&n,&t);
	int nol[n];
	for(i=0;i<n;i++)
		scanf("%d",&nol[i]);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&l,&u);
		small=nol[l];
		for(j=l;j<=u;j++)
		{
			if(small>nol[j])
				small=nol[j];
		}
		printf("%d\n",small);
			
	}	
	return 0;
}
