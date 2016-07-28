#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	char a[82],b[100];
	int i,j,c,len,k=0;
	scanf("%s",a);
	len = strlen(a);
	c=ceil(sqrt(len));
	for(i=0;i<c;i++)
	{
		j=i;
		while(j<len)
		{
			b[k]=a[j];
            k++;
			j+=c;
		}
		b[k]=' ';
        k++;
	}
    for(i=0;i<k;i++)
    {
        printf("%c",b[i]);
    }
}

