#include<stdio.h>

void pal(char *p)
{
	int i,j,odd=0;
	int x[26];
	for(j=0;j<26;j++)
		x[j]=0;
	while(*p!='\0')
	{
		i=*p-'a';
		x[i]+=1;	
		p++;	
	}
	for(j=0;j<26;j++)
		if((x[j]!=0)&&(x[j]%2==1))
			odd++;
	
	if(odd<=1)
		printf("YES\n");
	else
		printf("NO\n");		
}

int main()
{
	char s[100001];
	scanf("%s",s);
	pal(s);
	return 0;
}
