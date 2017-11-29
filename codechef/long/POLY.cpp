/*input
1
5
10 5 4 8
2 0 5 0
1 8 0 2
8 7 8 7
7 0 8 1
4
1
3
5
2000 
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
		lli n,i;
		scanf("%d",&n);
		if(n<1001)
		{
			lli poly[n][4];
			loop(i,0,n)
				scanf("%d %d %d %d",&poly[i][0],&poly[i][1],&poly[i][2],&poly[i][3]);	

			lli q;
			scanf("%d",&q);

			while(q--)
			{
				int qq,j;
				lli ans;
				scanf("%d",&qq);

				ans = poly[0][0] + poly[0][1]*qq + poly[0][2]*qq*qq + poly[0][3]*qq*qq*qq;

				loop(j,1,n)
				{
					ans = min(ans,(lli)poly[j][0] + poly[j][1]*qq + poly[j][2]*qq*qq + poly[j][3]*qq*qq*qq);
				}

				printf("%lld\n",ans);

			}	

		}
		
	}
	return 0;
}