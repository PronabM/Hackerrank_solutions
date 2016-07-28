#include<stdio.h>

int main()
{
	int h,m,t;
	char *hour,*min;
	scanf("%d",&h);
	scanf("%d",&m);
	
	if(m>30)
	h++;
	switch(h)
	{
		case 1:
		hour = "one";
		break;
		case 2:
		hour = "two";
		break;
		case 3:
		hour = "three";
		break;
		case 4:
		hour = "four";
		break;
		case 5:
		hour = "five";
		break;
		case 6:
		hour = "six";
		break;
		case 7:
		hour = "seven";
		break;
		case 8:
		hour = "eight";
		break;
		case 9:
		hour = "nine";
		break;
		case 10:
		hour = "ten";
		break;
		case 11:
		hour = "eleven";
		break;
		case 12:
		hour = "twelve";	
	}
	if(m>30)
		t=60-m;
	else
		t=m;	
	switch(t)
	{
		case 1:
		min = "one";
		break;
		case 2:
		min = "two";
		break;
		case 3:
		min = "three";
		break;
		case 4:
		min = "four";
		break;
		case 5:
		min = "five";
		break;
		case 6:
		min = "six";
		break;
		case 7:
		min = "seven";
		break;
		case 8:
		min = "eight";
		break;
		case 9:
		min = "nine";
		break;
		case 10:
		min = "ten";
		break;
		case 11:
		min = "eleven";
		break;
		case 12:
		min = "twelve";
		break;
		case 13:
		min = "thirteen";
		break;
		case 14:
		min = "fourteen";
		break;
		case 16:
		min = "sixteen";
		break;
		case 17:
		min = "seventeen";
		break;
		case 18:
		min = "eighteen";
		break;
		case 19:
		min = "nineteen";
		break;
		case 20:
		min = "twenty";
		break;
		case 21:
		min = "twenty one";
		break;
		case 22:
		min = "twenty two";
		break;
		case 23:
		min = "twenty three";
		break;
		case 24:
		min = "twenty four";
		break;
		case 25:
		min = "twenty five";
		break;
		case 26:
		min = "twenty six";
		break;
		case 27:
		min = "twenty seven";
		break;
		case 28:
		min = "twenty eight";
		break;
		case 29:
		min = "twenty nine";
	}
	
	switch(m)
	{
		case 0:
			printf("%s o' clock",hour);
			break;
		case 15:
			printf("quarter past %s",hour);
			break;
		case 30:
			printf("half past %s",hour);
			break;
		case 45:
			printf("quarter to %s",hour);
			break;
		default:
			if(m>30)
				
				printf("%s minutes to %s",min,hour);
			else
				printf("%s minutes past %s",min,hour);					
	}
	
	
}
