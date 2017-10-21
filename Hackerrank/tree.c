#include<stdio.h>

int main()
{
	int i,j,n,t;
	long unsigned len;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		len=1;
		for(j=1;j<=n;j++)
		{
			if(j%2==1)
				len*=2;
			else	
				len+=1;
		}
		printf("%lu\n",len);
	}
	return 0;
}
