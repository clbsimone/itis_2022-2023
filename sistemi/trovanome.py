from re import X


l = ["gauss", "conway", "eulero", "hilbert"]

l_GH = [nome for nome in l if nome[0] == "g" or nome[0] == "h"]
print(l_GH)
