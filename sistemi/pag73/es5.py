import math

def isPrimo(x):
    for i in range(2, int(math.sqrt(x)) + 1):
        if x % i == 0:
            return False
    return True

x = int(input("numero: "))

v = isPrimo(x)

print(v)