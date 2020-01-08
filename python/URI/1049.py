coluna=input()
if coluna=="vertebrado":
    classe=input()
    if (classe=="ave"):
        aliment=input()
        if aliment=="carnivoro":
            print("aguia")
        else:
                print("pomba")
    if classe=="mamifero":
        aliment=input()
        if aliment=="onivoro":
            print("homem")
        else:
            print("vaca")
if coluna=="invertebrado":
    classe=input()
    if classe=="inseto":
        aliment=input()
        if aliment=="hematofago":
            print("pulga")
        else:
            print("lagarta")
    if classe=="anelideo":
        aliment=input()
        if aliment=="hematofago":
            print("sanguessuga")
        else:
            print("minhoca")
