#richiesta 2 numeri, creare un dizionario di 2 elementi 1 media aritmetica 2 media geometrica(radice di a * b)

a = int(input("primo numero: "))

b = int(input("secondo numero: "))

d = {"aritmetica":(a+b)/2, "geometrica":(a*b)**0.5}

v = input("media ")
print(d[v])
