class Robot():
    def __init__(self, nome, massa, tipo):
        self.nome = nome
        self.massa = massa
        self.tipo = tipo
    
    def printNome(self):
        print(self.nome)

    def isPericoloso(self):
        if self.tipo == "umanoide" and self.massa >= 100:
            return True
        else:
            return False

def main():
    rob = Robot("NAO", 110, "umanoide")
    Robot.printNome();

    if Robot.isPericoloso() == True:
        print("pericoloso")
    else:
        print("non pericoloso")

if __name__ == "__main__":
    main()