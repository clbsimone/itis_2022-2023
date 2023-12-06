n = int(input("numero: "))
l = [1] * n
l[0], l[-1] = 0, 0
print(l)