from programao import limpar,Prog1,Prog8,Prog7,Prog6,Prog3,Prog2,Prog4,Prog5,Prog9
print(70*"*")
print(f'*{"BEM VINDOS AO PROGRAMÃO: IDEIA ORIGINAL EM C POR EDY IS THE FIM":^68}*')
print(f'*{"CÓDIGO ADAPTADO PARA PYTHON POR WÁLLACE FERREIRA":^68}*')
print(70*"*")
programas = {1:Prog1,
             2:Prog2,
             3:Prog3,
             4:Prog4,
             5:Prog5,
             6:Prog6,
             7:Prog7,
             8:Prog8,
             9:Prog9}
while True:
    print('Lista de Programas: ')
    print('1 - Conversão de Temperaturas',
          '2 - IMC',
          '3 - Calculo de Prestações'
          '4 - Pesquisa de salarios da prefeitura',
          '5 - Números Pares',
          '6 - Numeros Impares Decrescentes',
          '7 - Peso dos Bois',
          '8 - Arvore de Estrelinhas',
          '9 - Lanchonete do Edy!',
          '0 - Sair', sep='\n')
    escolha = int(input('Qual o programa gostaria de inicializar?: '))
    if escolha == 0:
        print('*'*20)
        print(f'*{"BYE BYE":^18}*')
        print('*'*20)
        break
    elif escolha<0 or escolha>9:
        print('Opcao invalida')
        limpar()
    else:
        limpar()
        programas[escolha]()