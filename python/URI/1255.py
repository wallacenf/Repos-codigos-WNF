#Exercicio 1255 do URI - Lista HW da Cris
from collections import Counter
#teste = int(input())
teste=1
while teste>0:
    frase = "frequency letters"
    frase = frase.lower()
    contagem = Counter(frase)
    conts = list(contagem.values())
    letras = list(contagem.keys())
    print(conts,letras,sep='\n')
    if ' ' in contagem.keys():
        contagem.pop(' ')
    conts = list(contagem.values())
    letras = list(contagem.keys())
    print(conts,letras,sep='\n')
    quantia_print = 0
    for num in conts:
        if num == max(conts):
            quantia_print+=1
    result = letras[:quantia_print]
    result.sort()
    print(result)
    teste-=1