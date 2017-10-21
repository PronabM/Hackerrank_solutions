#Tidy Numbers
t = int(raw_input())
for i in xrange(1, t + 1):
  N = list(raw_input())
  for j in xrange(1,len(N)):
      right = int(N[len(N)-j])
      left = int(N[len(N)-j-1])
      if left > right:
          for k in xrange(len(N)-j,len(N)):
            N[k] = '9'
          N[len(N)-j-1] = str(left-1)
  ans = int("".join(N))  
  print "case #"+str(i)+": "+str(ans)
