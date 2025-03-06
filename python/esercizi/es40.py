#Scrivi un programma che chieda all'utente i due cateti di un triangolo 
# rettangolo e calcoli l'ipotenusa usando il teorema di Pitagora
import math
c1=int(input("inserisci il primo catetere:\n"))
c2=int(input("inserisci il secondo catetere:\n"))
ipotenusa=math.sqrt(c1**2+c2**2)
print(ipotenusa)