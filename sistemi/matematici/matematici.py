def findMat(diz):
    id = int(input("id: "))

    listId = diz["id"]
    listName = diz["name"]
    
    for i, n in zip(listId, listName): # cicla su due liste contemporaneamente
        if i == id:
            return n

def splitList(list_row):
    diz = {"id":[], "name":[]}

    for row in list_row[1:]:
        list_data = row.split(",")
        # SB: print(list_data)
        diz["id"].append(int(list_data[0]))
        diz["name"].append(list_data[-1][:-1]) # diz name = perende il nome senza il \n finale

    # SB: print(diz)
    return diz


def readFile(name_file):
    file = open(name_file, "r")
    list_row = []
    list_row = file.readlines()
    print(list_row)
    return list_row


def main():
    list_row = readFile("mate.csv")
    diz = splitList(list_row)
    nome = findMat(diz)
    print(nome)

if __name__ == "__main__":
    main()
