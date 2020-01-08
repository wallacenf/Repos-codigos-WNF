teste = int(input())
while teste>0:
    a = int(input())
    ehprimo= lambda x: all(x % i != 0 for i in range(int(x**0.5)+1)[2:])
    if ehprimo(a):
        print("Prime")
    else:
        print("Not Prime")
    teste-=1


