/*input
2
10
13.4
5
22.3
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
#define arr(a,i,n) loop(i,0,n) scanf("%d",&a[i])
#define parr(a,i,n) loop(i,0,n) printf("%d ",a[i])
 
using namespace std;
 
int main()
{
	tc{
		int dec,intV,floatV;
		float num,ans=0.0f,k=0.5f;
		scanf("%d",&dec);
		scanf("%f",&num);

		float frac = (float)(num - floor(num));
		while(dec--)
		{
			frac*=2;
			if(frac>=1)
			{
				frac = (float)frac-1;
				ans = ans + k;
			}
			k = (float)k/2;
		}
		printf("%0.3f\n",floor(num)+ans);
	}
	return 0;
}