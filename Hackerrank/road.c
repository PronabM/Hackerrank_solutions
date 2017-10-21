#include<stdio.h>

int main()
{
	long n,m;
	scanf("%ld%ld",&n,&m);
	int a[m][3],min,i,j,ar[m],count;
	for(i=0;i<m;i++)
		ar[i]=1;
	for(i=0;i<m;i++)
		scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
	for(i=0;i<m;i++)
		if(a[i][1]-a[i][0]==n-1)
		{
			min=a[i][2];
			ar[i]=0;
			break;	
		}
	for(i=0;i<m;i++)
		printf("%d ",ar[i]);	
	printf("\n%d",min);
	return 0;		
}

