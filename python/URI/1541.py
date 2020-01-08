while True:
    entrada = input()
    if entrada == '0':
        break
    a, b, c = entrada.split()
    a = int(a)
    b = int(b)
    c = int(c)

    area = (a*b*100/c)**0.5
    area = int(area)
    print(area)
