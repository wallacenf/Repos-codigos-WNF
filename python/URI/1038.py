item,qtd = input().split()
item = int(item)
qtd = int(qtd)
if item==1:
    preco=4
if item==2:
    preco=4.5
if item==3:
    preco=5
if item==4:
    preco=2
if item==5:
    preco=1.5
print("Total: R$ {:.2f}".format(preco*qtd))

