#Chef and Employment Test
T = int(raw_input())
while T > 0:
    N, K = [int(s) for s in raw_input().split(" ")]
    lis = [int(s) for s in raw_input().split(" ")]
    lis = sorted(lis)
    for x in xrange(K):
        lis.append(100)
    print lis[(N+K-1)/2]    
    T = T-1
