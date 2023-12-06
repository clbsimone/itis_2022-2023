def scriviFile(nome_file, lista):
    f = open(nome_file, "w")
    for i in lista:
        f.write(f"{i}\n")
    f.close()

def main():
    tavola_pitagorica = [[i * j for i in range(1, 11)] for j in range(1, 11)]
    scriviFile("tabella_pitagorica.txt", tavola_pitagorica)

if __name__ == "__main__":
    main()