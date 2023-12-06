def lista1CStyle(lista1):
    for i in range(len(lista1)):
        print(lista1[i], end=" ")

def lista1PythonStyle(lista1):
    for i in lista1:
        print(i)

def enum(lista1):
    for i, value in enumerate(lista1):
        print(i, value)

def zipp(lista1, lista2):
    for i, j in zip(lista1, lista2):
        print(i, j)

def CStyle(lista1, lista2):
    for i in range(len(lista1)):
        print(lista1[i], lista2[i])

def dItems(diz):
    for item in diz.items():
        print(item)

def noItem(diz):
    for i in diz:
        print(i, diz[i])

def main():
    lista1 = ["a", "b", "c", "d"]
    lista2 = [1, 2, 3, 4]

    # for su lista 1 c style
    print("C style lista 1:")
    lista1CStyle(lista1)

    print()

    # for su lista 1 python style
    print("python style lista 1:")
    lista1PythonStyle(lista1)

    print()

    # for su lista 1 con enumerate
    print("enumerate lista 1:")
    enum(lista1)

    print()

    # for su lista 1 e 2 contemporaneamente con zip
    print("zip lista1 e lista2:")
    zipp(lista1, lista2)

    print()

    # for su lista 1 e 3 con range C style
    print("C lista1 e lista2:")
    CStyle(lista1, lista2)
    
    print()

    diz = {"lettere":lista1, "numeri":lista2}
    # SB: print(diz)
    
    # for su diz utilizzando items()
    print("for con item:")
    dItems(diz)

    print()

    # for su diz senza items()
    print("for senza item:")
    noItem(diz)

if __name__ == "__main__":
    main()