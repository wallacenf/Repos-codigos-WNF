saque,saldo=input().split()
saque = int(saque)
saldo = float(saldo)

if saque+0.50<saldo and saque%5==0:
    saldo -= (saque/5)*5
    saldo -= 0.5
    print("%.2f" % saldo)
else:
    print("%.2f" % saldo)       