lista =[110, 12, 45, 23, 66]

#modo preferito "pythnico"
for elemento in lista:
    print(elemento, end="-")

print("")

#modo c style
for i in range(0, len(lista)):
    print(lista[i], end=" ")