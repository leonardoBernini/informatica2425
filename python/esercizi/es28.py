#/*dato un numero n calcolare il suo quadrato sommando i primi n numeri dispari
#es: n=7 7^2=49 
#1 3 5 7 9 11 13*/
n=int(input("inserisci il numero di cui vuoi il quadrato:\n"))
somma=0
for i in range(1,(n*2)+1,+2):
    somma+=i
print(somma)