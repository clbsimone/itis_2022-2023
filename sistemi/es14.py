class Quadrato:
    def __init__(self, x, y, lato):
        self.x = x
        self.y = y
        self.lato = lato

    def perimetro(self):
        return self.lung * 4
        
    
    def area(self):
        return self.lato * self.lato

    def isDentro(self, xp, yp):
        if (self.x  < xp and self.x + self.lato == xp and self.y <= yp and self.y + self.lato >= yp):
            print("interno")
        else:
            print("esterno")

def main():
    q = Quadrato(11, 15, 5)
    print(q.perimetro())
    print(q.area())
    q.isDentro(12, 16)

if __name__ == "__main__":
    main()