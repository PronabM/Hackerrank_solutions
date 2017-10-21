#include<stdio.h>

struct date
{
	int d,m,y;
}dte,dta;

int main()
{
	int fine=0;
	scanf("%d %d %d",&dta.d,&dta.m,&dta.y);
	scanf("%d %d %d",&dte.d,&dte.m,&dte.y);
	if(dta.y-dte.y>0)
		fine=10000;
	else if((dta.y-dte.y<0)||(dta.m-dte.m<0))
		fine=0;		
	else if(dta.m-dte.m>0)
		fine=500*(dta.m-dte.m);	
	else if(dta.d-dte.d>0)
		fine=15*(dta.d-dte.d);
	printf("%d",fine);				
}
