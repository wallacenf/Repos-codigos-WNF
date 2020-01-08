"""
Leia um número no formato: XXXXX.YYY;
Imprima o número na forma invertida: YYY.XXXXX.
"""
import math
ins = float(input())
a = math.floor(ins)
b = ins-a
print(a,b)
