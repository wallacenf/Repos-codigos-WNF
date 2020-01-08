"""
Crie três variáveis para armazenar números inteiros;
Leia o primeiro número, que pode ser um valor na faixa de: -10000 ≤ A ≤ 10000;
Leia o segundo número, que pode ser um valor na faixa de: 0 ≤ B ≤ 99;
Leia o terceiro número, que pode ser um valor na faixa de: 0 ≤ C ≤ 999;
Imprima a letra A, um espaço em branco, o sinal de igual, um espaço em branco, o número armazenado na primeira variável,
uma virgula, um espaço em branco, a letra B, um espaço em branco, o sinal de igual, um espaço em branco, 
o número armazenado na segunda variável, uma virgula, um espaço em branco, a letra C, um espaço em branco,
o sinal de igual, um espaço em branco, o número armazenado na terceira variável. 
Não esqueça de pular linha;
Repita o procedimento 5, colocando o número em um espaçamento de 10 dígitos e justificado a direita;
Repita o procedimento 5, colocando o número em um espaçamento de 10 dígitos e preenchido com zeros;
Repita o procedimento 5, colocando o número em um espaçamento de 10 dígitos e justificado a esquerda."""

a = int(input())
b = int(input())
c = int(input())
print("A = {}, B = {}, C = {}".format(a,b,c))
print("A = {:>10}, B = {:>10}, C = {:>10}".format(a,b,c))
print("A = {:010d}, B = {:010d}, C = {:010d}".format(a,b,c))
print("A = {:<10}, B = {:<10}, C = {:<10}".format(a,b,c))

