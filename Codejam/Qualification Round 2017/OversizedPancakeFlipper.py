#Oversized Pancake Flipper

def swapThem(s,start,end):
   s = list(s)
   for j in xrange(start,end):
       if s[j] == '+':
           s[j] = '-'
       else:
           s[j] = '+'
           
   #print str(s)
   return "".join(s)
   
           



t = int(raw_input())
for i in xrange(1, t + 1):
  s, k = raw_input().split(" ")
  k = int(k)
  count =0
  flag = True
  for j in xrange(0,len(s)):
      if j+k > len(s):
          break
      if s[j]=='+':
          continue
      s = swapThem(s,j,j+k)
      count+=1
    
  for j in xrange(0,len(s)):
      if s[j] == '-':
          flag = False
          break
      
  if flag:
      print "case #"+str(i)+": "+str(count)
  else:
      print "case #"+str(i)+": IMPOSSIBLE"
