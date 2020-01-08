V = []
n=10
while n>0:
    num = int(input())
    V.append(num)
    n-=1
for i in range(0,10):
    if V[i]<=0:
        V[i]=1
    print("X[{}] = {}".format(i,V[i]))


