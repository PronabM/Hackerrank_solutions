#include <stdio.h>
#include <string.h>

int main() 
{
  int n,i,sum=0;
  scanf("%d",&n);
  int num[n];
  for (i=0;i<n;i++) 
  {
    scanf("%d",&num[i]);
    sum+=num[i];
  }
  printf("%d",sum);
  return 0;
}
