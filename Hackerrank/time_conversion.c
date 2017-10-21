#include<stdio.h>

int main()
{
	char a[10];
	int i,h,m,s,an=0;
	scanf("%s",a);
	h=(a[0]-'0')*10+a[1]-'0';
	m=(a[3]-'0')*10+a[4]-'0';
	s=(a[6]-'0')*10+a[7]-'0';
	if((a[8]=='P')&&(h!=12))
		an=1;
	else if((a[8]=='A')&&(h==12))
		h=0;	
	if(an)
		h+=12;
	if(h<10)
		printf("0%d",h);
	else	
		printf("%d",h);
	if(m<10)
		printf(":0%d",m);
	else
		printf(":%d",m);	
	if(s<10)		
		printf(":0%d",s);
	else
		printf(":%d",s);	
	
	return 0;	
}
