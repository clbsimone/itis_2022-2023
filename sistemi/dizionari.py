#contenitore di tanti elementi, messi a coppie 
d = {1:"abello", 2:"armando", 3:"barale", 4:"basso"}

#chiave cognome, lista voti
d1 = {"abello": [8, 9, 7, 10], "armando": [5, 8, 6, 1], "barale": [5, 5, 2, 10], "basso": [5, -1, 0, 8]}

#indicizazione mediante le chiavi 

#stampa nome
print(d[2])

#stampa lista
print(d1["abello"])

d3 = {"w":"avanti", "a":"sinistra", "s":"indietro", "d":"destra", "i":"avanti", "j":"sinistra", "k":"indietro", "l":"destra"}
comando = "avanti"
lista = []
for k, v in d3.items():
    if v == comando:
        lista.append(k)

print(lista)

for chiave in d3:
    print(chiave)
    print(d3[chiave])

print()

for chiave, valore in d3.items():
    print(chiave, valore)

l = ["ciao", print, 1, 3.24]

for indice, elemento in enumerate(l):
    print(indice, elemento)