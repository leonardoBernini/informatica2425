#/*11 Scrivi un programma che effettua il prodotto tra due numeri 
#utilizzando il metodo delle somme successive dopo aver controllato 
#l’input e accettato solo valori maggiori di 0*/
prodotto=0
while True:
    n1=int(input("inserisci un numero:\n"))
    if n1>=0:
        break
while True:
    n2=int(input("inserisci un numero:\n"))
    if n2>=0:
        break
for i in range(n1):
    prodotto+=n2
print("prodotto=",prodotto)

