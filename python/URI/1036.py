import math
a,b,c=input().split()
a=float(a)
b=float(b)
c=float(c)

delta = (b**2)-(4*a*c)

if a==0 or delta<0:
    print("Impossivel calcular")
else:
    delta=(delta)**0.5
    r1=(-b+delta)/(2*a)
    r2=(-b-delta)/(2*a)
    print("R1 = {:.5f}".format(r1))
    print("R2 = {:.5f}".format(r2))
