/*input
2
6 113 3
1 2 3 4 5 6
1 4
6 113 70
1 2 3 4 5 6
1 4 3 
*/
     
/*
 * @pronabm
 * Pronab Mukherjee
 * Attribution: http://www.geeksforgeeks.org/multiplicative-inverse-under-modulo-m/
 */

 
#include <bits/stdc++.h>
#define MOD 1000000007
#define MOD1 1000000009
#define tc int t; scanf("%d",&t); while(t--)
#define loop(i,start,end) for((i)=(start);(i)<(end);(i)++)
#define lli long long int
#define arr(a,i,n) loop(i,0,n) scanf("%lld",&a[i])
#define parr(a,i,n) loop(i,0,n) printf("%lld ",a[i])
 
using namespace std;


lli modInverse(lli a, lli m)
{
    lli m0 = m, t, q;
    lli x0 = 0, x1 = 1;
 
    if (m == 1)
      return 0;
 
    while (a > 1)
    {
        // q is quotient
        q = a / m;
        t = m;
        // m is remainder now, process same as
        // Euclid's algo
        m = a % m, a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    // Make x1 positive
    if (x1 < 0)
       x1 += m0;
    return x1;
}



 
int main()
{
	tc
	{
		lli N,P,Q,N2;
		scanf("%lld %lld %lld",&N,&P,&Q);
		N2 = (lli)(Q/64)+2; 
		
		lli A[N],i=0,preMult[N],preInv[N],x=0,B[N2];
		
		arr(A,i,N);
		arr(B,i,N2);

		preMult[0] = A[0]%P;
		loop(i,1,N)
		{
			preMult[i] = ((preMult[i-1])*(A[i])%P)%P;
		}

		//parr(preMult,i,N);printf("\n");


		preInv[0] = 1;
		loop(i,1,N)
		{
			preInv[i] = modInverse(preMult[i-1],P);
		}

		//parr(preInv,i,N);printf("\n");

		lli L,R,prevL=-1,prevR=-1,ans=-1,prevAns=-1;
		loop(i,0,Q)
		{
			
			if(i%64==0)
			{
				L = (B[(i/64)]+x)%N;
				R = (B[(i/64)+1]+x)%N;
			}
			else
			{
				L = (prevL + x)%N;
				R = (prevR + x)%N;
			}
			if(L>R)
				swap(L,R);


			if(L==prevL && R==prevR)
			{
				ans = prevAns;
			}
			else
			{
				ans = (preMult[R]*preInv[L])%P;
			}

			prevL = L;
			prevR = R;
			prevAns = ans;
			//if(i<Q-1)
				x = (ans+1)%P;	

			//printf("%lld %lld %lld\n",ans,L,R,prevL,prevR);
		}
		//printf("\n");
		printf("%lld\n",x%P);

	}
	return 0;
}