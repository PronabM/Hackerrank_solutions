#include<stdio.h>

int main()
{
	int n,i,small,count;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
			
	printf("%d\n",n);	
	do
	{
		count=0;
		small=1001;
		for(i=0;i<n;i++)
		{
			if((small>a[i])&&(a[i]!=0))
			small=a[i];
		}
		for(i=0;i<n;i++)
			if(a[i]!=0)
				a[i]-=small;		
		for(i=0;i<n;i++)
			if(a[i]!=0)
				count++;
		if(count!=0)		
		printf("%d\n",count);		
	}while(count!=0);
	return 0;
}
