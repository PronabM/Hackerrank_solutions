#include<stdio.h>
#include<string.h>

int main()
{
	int t,k,f=0,index;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{	
		int r1,c1,i,r,c,count,j;
		scanf("%d %d",&r,&c);
		char a[r][c+1];
		for(i=0;i<r;i++)
		{
			scanf("%81s",a[i]);
			a[i][c]='\0';	
		}	
		scanf("%d %d",&r1,&c1);
		char b[r1][c1+1];
		for(i=0;i<r1;i++)
		{
			scanf("%81s",b[i]);
			b[i][c1]='\0';	
		}
		for(i=0;(i<r)&&(!f);i++)
		{
			count=0;
			j=0;
			f=0;
			while(strstr(a[i],b[j])!=NULL)
			{
				char *str=a[i];
				char *result=strstr(str,b[j]);
				if(count==0)
				{
					count++;
					i++;
					j++;
					index=result-str;
					printf("%d\n",index);
				}	
				else
				{
					if(result-str==index)
					{
						count++;
						i++;
						j++;	
					}
					else break;
				}
			}	
			if(count==r1)
			{
				printf("YES\n");
				f=1;
				break;
			}	
		}
	if(!f)
		printf("NO\n");		
	}
	
}

