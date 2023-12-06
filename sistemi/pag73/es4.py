
def quadratiPerfetti(x):
    for i in range(x):

        j = 0
        while j * j <= i:
            j += 1

            if j * j == i:
                print(j * j)

x = int(input("numero: "))

quadratiPerfetti(x)
    
    
   

    
