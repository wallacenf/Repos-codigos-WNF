a,b,c=input().split()
a=int(a)
b=int(b)
c=int(c)
menor = min(a,b,c)
maior = max(a,b,c)
if a>menor and a<maior:
    medio=a
if b>menor and b<maior:
    medio=b
if c>menor and c<maior:
        medio=c
print(menor)
print(medio)
print(maior)
print("")
print(a)
print(b)
print(c)