from os import system

limpar = lambda: system('cls')


def Prog1():
    print(50 * '*')
    print('{:^50}'.format("Conversor: Celsius to Fahrenheit"))
    print(50 * '*')
    celsius = float(input('Digite a temperatura em ºC: '))
    fahrenheit = (9 / 5.0) * celsius + 32
    print(f'{celsius:.2f} ºC equivalem a {fahrenheit:.2f} ºF')

    print(30 * "-")
    escolher = input('Repetir o programa (S/N)')
    if escolher.upper() == 'S':
        limpar()
        Prog1()


def Prog2():
    print(30 * '*')
    print(f'*{"Cálculo de IMC":^28}*')
    print(30 * "*")
    altura = float(input('Qual a sua altura(em metros): '))
    peso = float(input("Qual o seu peso(em kg): "))
    imc = peso / altura ** 2
    print(f'Seu IMC foi {imc:.2f}')

    if imc <= 18.5:
        print('IMC até 18,5, você está abaixo do peso ideal')
    elif imc > 18.5 and imc <= 24.9:
        print('IMC de 18.5 até 24.9, você está no peso ideal')
    elif imc >= 25 and imc <= 30:
        print('IMC de 25 até 30, você está acima do peso ideal')
    elif imc > 30:
        print('IMC acima de 30, você está com obesidade')
    print(30 * "-")
    escolher = input('Repetir o programa (S/N)')
    if escolher.upper() == 'S':
        limpar()
        Prog2()


def Prog3():
    print(30 * "*")
    print(f'*{"CÁLCULO DE PARCELAMENTO":^28}*')
    print(30 * "*")
    valor = float(input('Informe o valor do produto: R$ '))
    limpar()
    print(30 * "*")
    print(f'*{"CÁLCULO DE PARCELAMENTO":^28}*')
    print(30 * "*")
    print(f'O valor do produto foi {valor:.2f}')
    escolha = int(input(
        "OPÇÕES DE PRESTAÇÕES \n 1 - Pagamento à vista e 30% de desconto \n 2 - Parcelamento em 2x e 20% de desconto \n 3 - Parcelamento em 3x e 10% de desconto \n 4 - De 4x a 6x sem desconto\n"))
    limpar()
    print(30 * "*")
    print(f'*{"CÁLCULO DE PARCELAMENTO":^28}*')
    print(30 * "*")
    if escolha == 1:
        print("Pagamento a vista com 30% de desconto!")
        print(f'Total a pagar R$ {valor * .7:.2f}')
    elif escolha == 2:
        print('Pagamento em 2x com 20% de desconto!')
        print(f'Total a pagar: R$ {valor * .80:.2f} e cada prestação será de R$ {(valor * .8) / 2.0:.2f}')
    elif escolha == 3:
        print('Pagamento em 3x com 10% de desconto!')
        print(f'Total a pagar: R$ {valor * .9:.2f} e cada prestação será de R$ {(valor * .9) / 3:.2f}')
    elif escolha >= 4 and escolha < 7:
        print(f'Pagamento em {escolha}x, sem desconto')
        print(f'Total a pagar: R$ {valor:.2f} e cada prestação será de R${valor / escolha:.2f}')
    else:
        print('Opção de parcelamento invalida')
    saida = input('Repetir o programa (S/N)')
    if saida.upper() == 'S':
        limpar()
        Prog3()


def Prog4():
    salario_mulheres = []
    filhos_mulheres = []
    salario_homem = []
    filhos_homem = []

    print(50 * '*')
    print(f'*{"PESQUISA DE POPULAÇÃO PELA PREFEITURA":^48}*')
    print(50 * '*')
    sexo = 'f'
    while sexo.upper() == 'M' or sexo.upper() == 'F':
        sexo = input('Informe o seu sexo, Masculino(M) ou Feminino (F)')
        if sexo.upper() != 'M' and sexo.upper() != 'F':
            break
        salario = float(input('Informe o seu salário: R$ '))
        filhos = int(input('Quantos filhos tem: '))
        if sexo.upper() == 'M':
            salario_homem.append(salario)
            filhos_homem.append(filhos)
        else:
            salario_mulheres.append(salario)
            filhos_mulheres.append(filhos)

    salario_todos = salario_homem + salario_mulheres
    filhos_todos = filhos_mulheres + filhos_homem
    if len(salario_todos) == 0:
        media_salario = 0
        media_filhos = 0
    else:
        media_salario = sum(salario_todos) / len(salario_todos)
        media_filhos = int(sum(filhos_todos) / len(filhos_todos))
    contagem_maior_que_900_mulher = 0
    for mulher in salario_mulheres:
        if mulher > 900:
            contagem_maior_que_900_mulher += 1

    limpar()

    print(50 * '*')
    print(f'*{"RESULTADOS PESQUISA DE POPULAÇÃO PELA PREFEITURA":^48}*')
    print(50 * '*')
    print(f'Média de salários da população: R$ {media_salario:.2f}')
    print(f'Média de filhos da população: {media_filhos}')
    print(f'Maior salario da pesquisa: R${max(salario_todos):.2f}')
    print(f'Numero de mulheres com salário acima de R$ 900,00: {contagem_maior_que_900_mulher}')

    saida = input('Repetir o programa (S/N)')
    if saida.upper() == 'S':
        limpar()
        Prog4()


def Prog5():
    print(30 * "*")
    print(f'*{"NÚMEROS PARES ENTRE 0 e 50":^28}*')
    print(30 * "*")
    lista_de_pares = [numeros for numeros in range(0, 51) if numeros % 2 == 0]
    print(lista_de_pares[:5], lista_de_pares[5:10], lista_de_pares[10:15], lista_de_pares[15:20], lista_de_pares[20:26],
          sep='\n')
    saida = input('Repetir o programa (S/N)')
    if saida.upper() == 'S':
        limpar()
        Prog5()


def Prog6():
    print(50 * "*")
    print(f'*{"Números Impares entre 0 e 50":^48}*')
    print(f'*{"Exibidos em ordem decrescentes":^48}*')
    print(50 * "*")
    lista_impar_decrescente = [numero for numero in range(50, 0, -1) if numero % 2 != 0]
    print(lista_impar_decrescente[:5], lista_impar_decrescente[5:10], lista_impar_decrescente[10:15],
          lista_impar_decrescente[15:20], lista_impar_decrescente[20:26], sep='\n')
    saida = input('Repetir o programa (S/N)')

    if saida.upper() == 'S':
        limpar()
        Prog6()

def Prog7():
    print(30 * "*")
    print(f'*{"Avaliação de peso de bois":^28}*')
    print(30 * "*")
    peso_dos_bois = []
    for boi in range(0, 10):
        peso = float(input(f"Qual o peso do boi nº {boi + 1}: "))
        peso_dos_bois.append(peso)
    limpar()
    print(f'O boi mais pesado possuia {max(peso_dos_bois):.0f} kgs')
    print(f'O boi com o menor peso possuia {min(peso_dos_bois):.0f} kgs')
    saida = input('Repetir o programa (S/N)')
    if saida.upper() == 'S':
        limpar()
        Prog7()


def Prog8():
    print("*" * 30)
    print(f'*{"Arvore de Estrelinhas":^28}*')
    print(30 * "*")

    tamanho = int(input('Qual o tamanho da base da arvore: '))
    for n in range(1,tamanho+1,2):
        print(f'{"*"*n:^100}')
    saida = input('\nRepetir o programa (S/N)')
    if saida.upper() == 'S':
        limpar()
        Prog8()
def Prog9():
    lanches = {1:['Misto quente',2.50],
               2:['Cachorro quente', 3.00,],
               3:['Hamburguer Simples',3.50],
               4:['X-Egg',4.00,],
               5:['X-Tudo',5.0]}
    print(40*'*')
    print(f'*{"Lanchonete do Edy":^38}*')
    print(f'*{"MENU":^38}*')
    print(40*'*')
    totol = 0.0
    pedidos = []
    quantias = []

    for i in range(1,6):
        print(f'Opção {i} - {lanches[i][0]} - R$ {lanches[i][1]:.2f}')
    print('Opção 0 - Finalizar pedido e sair')
    opcao = int(input('Qual o seu pedido: '))
    while opcao!=0:
        quantidade = int(input(f'Quantos {lanches[opcao][0]} você vai querer cara? '))
        totol += quantidade * lanches[opcao][1]
        pedidos.append(lanches[opcao][0])
        quantias.append(quantidade)
        limpar()
        for i in range(1, 6):
            print(f'Opção {i} - {lanches[i][0]} - R$ {lanches[i][1]:.2f}')
        print('Opção 0 - Finalizar pedido e sair')
        opcao = int(input('Qual o seu novo pedido: '))

    limpar()
    print('FInalizando seus pedidos!\nConfira a abaixo a lista de pedidos')
    for n in range(0,len(quantias)):
        print(f'{quantias[n]}x {pedidos[n]}')
    print(f'Totalizando R$ {totol:.2f}')
