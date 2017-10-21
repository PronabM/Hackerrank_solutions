#include<stdio.h>

int main()
{
	int t,i,n,c,m,w,count;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d %d",&n,&c,&m);
		w=n/c;
		count=w;
		while(w>=m)
		{
			count++;
			w-=m;
			w++;
		}
		printf("%d\n",count);
	}
	return 0;
}

