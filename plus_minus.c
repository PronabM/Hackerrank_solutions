#include <stdio.h>

int main() 
{
  int n,i;
  float fp=0,fn=0,fz=0;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++) 
  {
  	scanf("%d",&a[i]);
	if(a[i]==0)
	 fz++;
	else if(a[i]<0)
	 fn++;
	else
	 fp++;  		  
  }		
  printf("%0.3f\n%0.3f\n%0.3f",fp/n,fn/n,fz/n);
  return 0;
}
