#include <stdio.h>



int main() {
    long unsigned n, k, i, count,j,t;
    scanf("%lu%lu", &n, &k);
    long unsigned p[n];
    for(i=0; i<n; i++)
		p[i]=0;
	j=0;
	for(i=0; i<n; i++)
	{
		scanf("%lu", &p[j]);
		if(!(p[j]<=k))
			j--;
		j++;		
	} 
        
		
    long unsigned answer = 0;
    for(i=0; i<n; i++) {
    	j=i;
    	count=0;
    	t=k;
        while((p[j]!=0))
        {
        	if(p[j]<=t)
        	{
        		count++;
        		t=t-p[j];
        		j++;
			}
			else j++;
		}
		if(count>answer)
			answer=count;
    }
	printf("%lu",answer);
	return 0; 
}
  
