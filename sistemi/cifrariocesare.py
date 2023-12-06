#ogni lettera vine sostituita con quella sucessiva del alfabeto 

import string


d = {"a": "b", "b": "c", "c": "d", "d": "e", "e": "f", "f": "g", "g": "h", "h": "i", "i": "l", "l": "m",
              "m": "n", "n": "o", "o": "p", "p": "q", "q": "r", "r": "s", "s": "t", "t": "u", "u": "v", "v": "z", "z": "a", " ":" "}

s = input("parola: ")
criptato = ""

for lettera in s:
    criptato = criptato + d[lettera]

print(criptato)

#dizionario vuoto
decodificatore = {}

#for k, v in d.items:
#ciclo for fatto conteporaneamente su due variabili
for k, v in d.items(): 
    #print(k, v)
    decodificatore[v] = k

decodificato = ""
for lettera in criptato:
    decodificato = decodificato + decodificatore[lettera]

print(decodificato)