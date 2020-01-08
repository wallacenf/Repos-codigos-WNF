cd1,qtd1,preco1=input().split()
cd2,qtd2,preco2=input().split()
cd1 = int(cd1)
cd2 = int(cd2)
qtd1 = int(qtd1)
qtd2 = int(qtd2)
preco1 = float(preco1)
preco2 = float(preco2)

custo = qtd1*preco1 + qtd2*preco2

#print("VALOR A PAGAR : {:.2f}".format(custo))
print("VALOR A PAGAR: R$ %.2f" % custo)