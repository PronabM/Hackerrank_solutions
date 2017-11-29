import math

T = int(raw_input())
while(T!=0):
	n = int(raw_input())

	if n < 1 :
		poly = []
		for i in xrange(n):
		    lis = map(int,raw_input().split())
		    poly.append(lis)	
		q = int(raw_input()) 	
		while(q!=0):
			ans = 0
			qq = int(raw_input())
			ans = poly[0][0] + poly[0][1]*qq + poly[0][2]*qq*qq + poly[0][3]*qq*qq*qq

			for j in xrange(1,n):
				ans = min(ans,poly[j][0] + poly[j][1]*qq + poly[j][2]*qq*qq + poly[j][3]*qq*qq*qq)
			print ans
			q = q-1
	else:
	    poly = []
	    ans = 100009
	    for i in xrange(n):
		    lis = map(int,raw_input().split())
		    #lis.append(lis[0]+lis[1]*(50000))
		    ans = min(ans,lis[0])
		    poly.append(lis)
	    
	    poly = sorted(poly,key=lambda x: (x[0],x[1]))    #nlogn
	    #print poly
	    q = int(raw_input())
	    
	    if q==0:
	    	print ans

zzz    		while(q!=0):
                qq = int(raw_input())
                i = 0
                while (poly[i][0] + poly[i][1]*qq>poly[i+1][0] + poly[i+1][1]*qq and i<n-1):
        	        i = i+1
                #print i, qq      
                ans = poly[i][0] + poly[i][1]*qq + poly[i][2]*qq*qq + poly[i][3]*qq*qq*qq
                print ans
                q = q-1 
            
	T = T-1		