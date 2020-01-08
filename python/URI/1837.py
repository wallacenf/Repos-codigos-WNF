a, b = input().split()
a = int(a)
b = int(b)
for r in range(abs(b)):
    if (a-r) % b == 0:
        q = (a-r)/b
        q = int(q)
        break
print("{} {}".format(q, r))
