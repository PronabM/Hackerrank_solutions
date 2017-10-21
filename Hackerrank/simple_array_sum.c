#include <stdio.h>
#include <string.h>

int main() 
{
  long unsigned int n,i,sum=0;
  scanf("%lu",&n);
  int num[n];
  for (i=0;i<n;i++) 
  {
    scanf("%lu",&num[i]);
    sum+=num[i];
  }
  printf("%lu",sum);
  return 0;
}
