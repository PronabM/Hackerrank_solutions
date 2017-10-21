#include<stdio.h>

int len(char *a)
{
	int i=0;
	while(*a!='\0')
	{
		i++;
		a++;
	}
	return(i);
}

int main()
{
	int i,c,h=0,l,k=0,t;
	char a[5001],b[5001];
	scanf("%s",a);
	scanf("%s",b);
	l=len(a);
	for(i=0;i<l;i++)
	{
		t=i;
		c=0;
		for(k=0;k<l;k++)
		{
			if(a[t]==b[k])
			{
				t++;
				c++;
				continue;
				
			}	
		}
		if(c>h)
			h=c;
	}
	if(h==1)
	h++;
	printf("%d",h);
}

