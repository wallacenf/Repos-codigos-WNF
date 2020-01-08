valor = float(input())
notas = int(valor)
cents = (valor-notas)*100
cents = int(cents)

n100 = notas/100
resto= notas%100
n50=resto/50
resto%=50
n20=resto/20
resto%=20
n10=resto/10
resto%=10
n5=resto/5
resto%=5
n2=resto/2
resto%=2

cents+=resto*100
m100=cents/100
resto=cents%100
m50=resto/50
resto%=50
m25=resto/25
resto%=25
m10=resto/10
resto%=10
m5=resto/5
resto%=5
m1=resto
print("NOTAS:")
print("%i nota(s) de R$ 100.00" % n100)
print("%i nota(s) de R$ 50.00" % n50)
print("%i nota(s) de R$ 20.00" % n20)
print("%i nota(s) de R$ 10.00" % n10)
print("%i nota(s) de R$ 5.00" % n5)
print("%i nota(s) de R$ 2.00" % n2)
print("MOEDAS:")
print("%i moeda(s) de R$ 1.00" % m100)
print("%i moeda(s) de R$ 0.50" % m50)
print("%i moeda(s) de R$ 0.25" % m25)
print("%i moeda(s) de R$ 0.10" % m10)
print("%i moeda(s) de R$ 0.05" % m5)
print("%i moeda(s) de R$ 0.01" % m1)

