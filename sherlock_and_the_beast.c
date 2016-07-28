#include<stdio.h>

void satb(int a)
{
	int nof=0,noth=0,i,b;
	b=a;
	if(a%3==0)
	nof=a;
	else if(a%3!=0)
	{
		while(b!=0)
		{
			b-=5;
			noth+=5;
			if(b%3==0)
			{
				nof+=3*(b/3);
				break;
			}
		}	
	}
	else if(a%5==0)
	noth=a;
	if((b<=0)&&(a%5!=0))
		printf("-1\n");
 	else if(((a>0)&&(b>0))||((a>0)&&(a%5==0)))
	{
		for(i=0;i<nof;i++)
			printf("5");
		for(i=0;i<noth;i++)
			printf("3");
		printf("\n");	
	}
		
}

int main()
{
	int t,sum,i;
	long unsigned n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lu",&n);
		satb(n);		
	}
	return 0;	
}
