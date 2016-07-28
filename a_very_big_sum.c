#include <stdio.h>


int main() 
{
  int n,i,j,sum1=0,sum2=0;
  scanf("%d",&n);
  int num[n][n];
  for (i=0;i<n;i++) 
  {
    for(j=0;j<n;j++)
    {
    	scanf("%d",&num[i][j]);
	}
	sum1+=num[i][i];
	sum2+=num[n-i][n-i];
  }
  if(sum1>sum2)
  	printf("%d",sum1-sum2);
  else
	printf("%d",sum2-sum1);
  return 0;
}
