/*input
4
0 1 0 10
*/
     
/*
 * @pronabm
 * Pronab Mukherjee
 */
 
#include <bits/stdc++.h>
#define MOD 1000000007
#define MOD1 1000000009
#define tc int t; scanf("%d",&t); while(t--)
#define loop(i,start,end) for((i)=(start);(i)<end;(i)++)
#define lli long long int
#define arr(a,i,n) loop(i,0,n) scanf("%lld",&a[i])
#define parr(a,i,n) loop(i,0,n) printf("%d ",a[i])

using namespace std;

int main()
{
	int n,i,total=1,prev=0,sum,prevSince=0;
	scanf("%d",&n);
	sum=1;
	lli a[n];
	arr(a,i,n);
	prev=a[n-1];
	for(i=n-2;i>=0;i--)
	{
	    prevSince++;
	    //printf("%d\n",prev-prevSince);
		if(a[i]>=i)
		{
			if(prev-prevSince<0)
				sum++;
			break;
		}
		if(a[i]<=prev-prevSince)
		{
		    continue;
		}
		if(prev-prevSince<0)
		    sum++;
		prev=a[i];
		prevSince=0;
	}
	if(sum<0)
		printf("0\n");
	else
		printf("%d\n",sum);
	return 0;
}