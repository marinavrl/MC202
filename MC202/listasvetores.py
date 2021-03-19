#Python é bom para manipulação de listas
print (" Digite 10 nú meros ")
lista = []
for i in range (10) :
    lista . append ( int ( input () ))
print (" Positivos ")
for x in lista :
    if x > 0:
        print (x)