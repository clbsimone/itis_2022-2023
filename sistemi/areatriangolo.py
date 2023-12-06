triangolo = [(1.5, 3.6), (-1.0, 0.0), (5.1, 4.3)]
print(f"A{triangolo[0]} B{triangolo[1]} C{triangolo[2]}")

area = abs((triangolo[0][0] * triangolo[1][1]) +
                (triangolo[0][0] * triangolo[1][1]) + 
                (triangolo[0][1] * triangolo[2][0]) +
                (triangolo[1][0] * triangolo[2][1]) -
                (triangolo[2][0] * triangolo[1][1]) -
                (triangolo[2][1] * triangolo[0][0]) -
                (triangolo[1][0] * triangolo[0][1]))

print(f"area: {area: .2f}")
