"""
Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. 
Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.
"""
a,b,c=input().split()
a=float(a)
b=float(b)
c=float(c)

triangulo = a*c*0.5
circ = c**2*3.14159
trap = (a+b)*c*.5
quad = b**2
ret = a*b

print("TRIANGULO: {:.3f}".format(triangulo))
print("CIRCULO: {:.3f}".format(circ))
print("TRAPEZIO: {:.3f}".format(trap))
print("QUADRADO: {:.3f}".format(quad))
print("RETANGULO: {:.3f}".format(ret))
