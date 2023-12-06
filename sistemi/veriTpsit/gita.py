def controlloIncasso(totale):
    if totale == 2200:
        print("quota raggiunta")
    elif totale < 2200:
        print(f"mancano: {2200 - totale}")
    elif totale > 2200:
        print(f"quota superata di: {totale - 2200}")


def incassoTotale(lista_righe):
    somma = 0

    for riga in lista_righe:
        lista_dati = riga.split(";")
        quota = int(lista_dati[-1])
        somma = somma + quota
    # SB: print(somma)
    controlloIncasso(somma)


def controlloQuota(quota):
    if quota == 100:
        print("quota raggiunta")
    elif quota < 100:
        print(f"manacano: {100 - quota}")
    elif quota > 100:
        print(f"versamento superato di: {quota - 100}")


def ricercaNome(lista_righe):
    nome = input("nome: ")
    somma = 0

    for riga in lista_righe:
        lista_dati = riga.split(";")
        # SB: print(lista_dati[1], lista_dati[-1])

        if nome == lista_dati[1]:
            # SB: print(lista_dati[-1])
            somma = somma + int(lista_dati[-1])
    # SB: print(somma)

    controlloQuota(somma)

def situazioneStudenti(lista_righe):
    somma = 0

    for riga in lista_righe:
        lista_dati = riga.split(";")
        n1 = lista_dati[1]
        # SB: print(n1)
        for riga1 in lista_righe:
            lista_dati1 = riga1.split(";")
            n2 = lista_dati1[1]
            # SB: print(n2)
            if n1 == n2:
                somma = somma + int(lista_dati[-1])
        controlloQuota(somma)
        somma = 0

def leggiFile(name_file):
    file = open(name_file, "r")
    lista_righe = []
    lista_righe = file.readlines()

    incassoTotale(lista_righe)
    ricercaNome(lista_righe)
    situazioneStudenti(lista_righe)

    file.close()
    # print(lista_righe)

def main():
    name_file = "4AROB_GITA.csv"
    leggiFile(name_file)

if __name__ == "__main__":
    main()

