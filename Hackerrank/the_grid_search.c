#include<stdio.h>
#include<string.h>

int main()
{
	int R,C,r,c,j=0,k=0,i,count=0;
	scanf("%d %d",&R,&C);
	char s1[R][C];
	for(i=0;i<R;i++)
		scanf(" %[^\n]",s1[i]);
	scanf("%d %d",&r,&c);
	char s2[r][c];
	for(i=0;i<r;i++)
		scanf(" %[^\n]",s2[i]);
	while(k<R)
	{
		if(strstr(s1[k],s2[j])!=NULL)
			count++;
		else
		{
			j++;
			continue;
		}	
		j++;
		k++;	
	}	
	if(count==r)
		printf("YES");
	else
		printf("%s",s2[0]);	
}
