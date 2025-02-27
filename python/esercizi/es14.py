#*Scrivi un programma che legge in input il valore di tre lati di un triangolo, 
#individua se si tratta di un triangolo equilatero e ne 
#calcola in tal caso l’area e il perimetro
import math
a=int(input("inserisci il primo lato\n"))
b=int(input("inserisci il secondo lato\n"))
c=int(input("inserisci il terzo lato\n"))
if a==b and b==c:
    print("il triangolo è equilatero e il suo perimetro è",a+b+c,"è l'area è di")
else: 
    print("il triangolo è equilatero")