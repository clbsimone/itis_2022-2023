#rimuovere le vocali

vocali = ["a", "e", "i", "o", "u"]

carattere = "c"

s = input("nome: ")

l = [i for i in s if not(i in vocali)]
print(*l)
