x = int(input("numero: "))

if (x % 2) == 0:
    print("divisibile x 2")
elif (x % 3) == 0:
    print("divisibile x 3")
elif (x % 5) == 0:
    print("divisibile x 5")   
elif (x % 2) != 0 or (x % 3) != 0 or (x % 5) != 0:
    print("non divisibile")
