from xmlrpc.client import MININT


lista = [110, 12, 45, 23, 66]
max = lista[0]
min = lista[0]

for elemento in lista[1:]:

    if max < elemento:
        max = elemento
    else:
        pass
    
    if min > elemento:
        min = elemento

print(f"max: {max}")
print(f"min: {min}")
