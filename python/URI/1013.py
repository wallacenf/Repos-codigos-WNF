import math
a,b,c=input().split()
a=int(a)
b=int(b)
c=int(c)

a=(a+b+abs(a-b))/2
a=(a+c+abs(a-c))/2
print("%i eh o maior" % a)
