def TestarTriangulo(a,b,c):
    if a < b+c:
        if b < a+c:
            if c < a+b:
                return True
    return False

a,b,c,d = input().split()
a=int(a)
b=int(b)
c=int(c)
d=int(d)

lista = []
lista.append(TestarTriangulo(a,b,c))
lista.append(TestarTriangulo(a,b,d))
lista.append(TestarTriangulo(a,c,d))
lista.append(TestarTriangulo(b,c,d))
if True in lista:
    print('S')
else:
    print('N')