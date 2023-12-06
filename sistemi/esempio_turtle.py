import turtle
import math

finestra = turtle.Screen()


def poligono(posx, posy, nlati, cursore, colore):
    cursore.color("black")
    cursore.begin_fill()
    cursore.penup()
    cursore.setposition(posx, posy)
    
    angolo = 360/nlati
    lato = 2 * 80*math.sin(angolo / 2 * 3.15 / 180)

    for _ in range(0, nlati):
        cursore.right(angolo)
        cursore.forward(lato)

    cursore.color(colore)
    cursore.end_fill()
    

def main():
    ferrua = turtle.Turtle()

    diz_pos = {3:(-400, 390, "red"), 4:(-300, 390, "blue"), 5:(-110, 390, "red"), 6:(-370,270, "blue"), 7:(-200, 260, "red"), 8:(-85, 275, "blue"), 9:(-265,50, "red")}
    ferrua.speed(0)

    # SB: poligono(0, 0, 3, t, "red")

    for nlati, pos in diz_pos.items():
        poligono(pos[0], pos[1], nlati, ferrua, pos[2])
    
    turtle.done()
    

if __name__ == "__main__":
    main()