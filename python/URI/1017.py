valor = int(input())
n100 = valor/100
resto=valor%100
n50 = resto/50
resto%=50
n20=resto/20
resto%=20
n10=resto/10
resto%=10
n5=resto/5
resto%=5
n2=resto/2
resto%=2
n1=resto

print("%i" % valor)
print("%i nota(s) de R$ 100,00" % n100)
print("%i nota(s) de R$ 50,00" % n50)
print("%i nota(s) de R$ 20,00" % n20)
print("%i nota(s) de R$ 10,00" % n10)
print("%i nota(s) de R$ 5,00" % n5)
print("%i nota(s) de R$ 2,00" % n2)
print("%i nota(s) de R$ 1,00" % n1)
