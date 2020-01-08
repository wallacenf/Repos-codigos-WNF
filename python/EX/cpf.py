testes = int(input())
while testes>0:
    entrada=input()
    numeros = []
    for d in entrada:
        if d.isdigit() or d=='.':
            numeros.append(d)
    print(map(int, numeros[:11:1]))
    testes=testes-1

