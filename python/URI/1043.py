a,b,c=input().split()
a=float(a)
b=float(b)
c=float(c)

if a<b+c and abs(b-c)<a and b<a+c and abs(a-c)<b and c<a+b and abs(a-b)<c:
    print("Perimetro = {:.1f}".format(a+b+c))
else:
    area = ((a+b)*c)/2
    print("Area = {:.1f}".format(area))