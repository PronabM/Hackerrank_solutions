#include<stdio.h>

int isleap(int y)
{
	if((y%4==0)&&(y%100!=0))
		return(1);
	else if((y%400==0)&&(y%100==0))
		return(1);
	else return(0);		
}

int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		long unsigned d1,d2,m1,m2,y1,y2,im=1,iy=1899,tm,ty;
		long unsigned indx=0,count=0;
		scanf("%lu%lu%lu%lu%lu%lu",&d1,&m1,&y1,&d2,&m2,&y2);
		tm=m1;
		ty=y1;	
		if(d1>13)
		{
			if(m1==12)
			{
				m1=1;
				y1++;	
			}	
			else
			m1++;
			
		}
			
		if(d2<13)
		{
			if(m2==1)
			{
				m2=12;
				y2--;
			}	
			else		
			m2--;
		}
				
		if(im>m1)
		{
			tm=m1+12;
			ty=y1-1;
		}
		while(im!=tm)
		{
			switch(im%12)
			{
				case 1:
					indx+=3;
					break;
				case 2:
					indx+=isleap(iy);
					break;
				case 3:
					indx+=3;
					break;
				case 4:
					indx+=2;
					break;
				case 5:
					indx+=3;
					break;
				case 6:
					indx+=2;
					break;
				case 7:
					indx+=3;
					break;
				case 8:
					indx+=3;
					break;
				case 9:
					indx+=2;
					break;
				case 10:
					indx+=3;
					break;
				case 11:
					indx+=2;
					break;
				case 0:	
					indx+=3;
			}
			im++;
			indx%=7;	
		}
		
		while(iy!=ty)
		{
			switch(isleap(iy))
			{
				case 0:
					indx+=1;
					break;
				case 1:
					indx+=2;
					break;	
			}
			iy++;
			indx%=7;	
		}	
			if(isleap(y1))
				indx++;
		
			if((indx%7==0))
				count++;
				
		tm=m2;
		ty=y2;
		if(m1>m2)
		{
			ty=y2-1;
			tm=m2+12+(ty-y1)*12;
		}
		while(m1<=tm)
		{
			switch(m1%12)
			{
				case 1:
					indx+=3;
					break;
				case 2:
					indx+=isleap(y1);
					break;
				case 3:
					indx+=3;
					break;
				case 4:
					indx+=2;
					break;
				case 5:
					indx+=3;
					break;
				case 6:
					indx+=2;
					break;
				case 7:
					indx+=3;
					break;
				case 8:
					indx+=3;
					break;
				case 9:
					indx+=2;
					break;
				case 10:
					indx+=3;
					break;
				case 11:
					indx+=2;
					break;
				case 0:	
					indx+=3;
					y1++;
			}
			m1++;
			indx%=7;
			if(indx==0)
				count++;		
		}
		printf("%lu\n",count);
	}
	return 0;
}

