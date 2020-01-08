N = []
num = int(input())
N.append(num)
print("N[0] = {}".format(num))
for i in range(1,10):
    num*=2
    N.append(num)
    print("N[{}] = {}".format(i,N[i]))

