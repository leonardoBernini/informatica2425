#/* stabilire se un numero è dispari
#controlando l'ultima cifra meno significativa*/
n=int(input("inserisci un numero\n"))
cifra=n%10
print("la cifra meno significativa è",cifra)
if cifra%2==0:
    print(n,"è pari")
else:
    print(n,"è dispari")