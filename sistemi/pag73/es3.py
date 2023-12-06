def operazioni(operaione, n1, n2):
    
    if operazione == 0:
        tot = n1 + n2
    if operazione == 1:
        tot = n1 - n2
    if operazione == 2:
        tot = n1 * n2
    if operazione == 3:
        if n2 < 0:
            print("divisore < 0")
        else:
            tot = n1 / n2

    return tot

def stampa(x):
    print(x)

d = {0:"somma", 1:"sottrazione", 2:"moltiplicazione", 3:"divisione"}
stampa(d)

operazione = int(input("menu: "))

n1 = int(input("primo numero: "))
n2 = int(input("secondo numero: "))

tot = operazioni(operazione, n1, n2)

stampa(tot)
