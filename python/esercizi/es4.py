#/*dati due numeri a e b , verificare se ha a è il quadrato di b*/
a=int(input("inserisci il primo numero\n"))
b=int(input("inserisci il secondo numero\n"))
if a==b**2:
    print(a,"è il quadrato di",b)
else:
    print(a,"non è il quadrato di",b)