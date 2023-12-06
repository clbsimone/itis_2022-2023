# simulare un robot pulisci pavimenti che si e buggato, ogni secondo
# si muove a caso di 1cm per 2ore

import turtle
import random

finestra = turtle.Screen()
ferrua = turtle.Turtle()

SPEED = 0
MOVE = 10
N_PASSI = 3600000

def main():
    finestra.screensize(1000, 1000, "black")    
    ferrua.color("white")

    ferrua.speed(SPEED)

    for _ in range(N_PASSI):
        angolo = 90 * random.randint(0, 4)

        ferrua.right(angolo)
        ferrua.forward(MOVE)
    

if __name__ == "__main__":
    main()
