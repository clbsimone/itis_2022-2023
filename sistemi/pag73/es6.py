def isPrimo(x):
    cont = 0
    for i in range(1, x + 1):
        y = x % i

        if y == 0:
            cont += 1

    if cont == 2 or x == 1:
        return True
    else:
        return False

n = 1000

for i in range(1, n + 1):
    v = isPrimo(i)
    print(f"{i}={v}")


