#include<stdio.h>
#include<string.h>

int main(){
	int t,j;
	scanf("%d",&t);
	char a[10001];
	int i,n;
	for(j=0;j<t;j++)
	{
		scanf("%s",a);
		n= strlen(a);
		for(i=0;i<n-1;i++)
			if(!((a[i+1]-a[i]==a[n-i-1]-a[n-i-2])||(a[i+1]-a[i]==-(a[n-i-1]-a[n-i-2]))))
				break;
		if(i==n-1)
			printf("Funny\n");
		else 
			printf("Not Funny\n");
	}					
}
