comp, p, usos = input().split()
comp, p, usos = int(comp), int(p), int(usos)
if (comp*usos <= p):
    print('S')
else:
    print('N')
