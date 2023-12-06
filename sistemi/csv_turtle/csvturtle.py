import turtle

COLOR = "black"
window = turtle.Screen()
ferrua = turtle.Turtle()
ferrua.color(COLOR)

def letturaFile(name_file):
    file = open(name_file)
    list_row = file.readlines()
    return list_row

def splitList(l):
    diz = {"direzione":[], "linea":[]}

    for row in l:
        list_row = row.split(",")
        diz["direzione"].append(list_row[0])
        diz["linea"].append(list_row[1])

    return diz

def disegno(diz):
    list_direzione = diz["direzione"]
    list_linea = diz["linea"]

    print(list_direzione)
    print(list_linea)
    for dir, lin in zip(list_direzione, list_linea):
        if dir == "forward":
            ferrua.forward(int(lin))
        elif dir == "right":
            ferrua.right(int(lin))
    
def main():
    ferrua.fillcolor(COLOR)
    ferrua.speed(3)

    name_file = "file.csv"

    l = letturaFile(name_file)

    #SB: print(s)
    d = splitList(l)
    #SB: print(d)
    ferrua.begin_fill()

    disegno(d)
    
    ferrua.end_fill()
    turtle.done()
    

if __name__ == "__main__":
    main()