#/*11 Scrivi un programma che effettua il prodotto tra due numeri 
#utilizzando il metodo delle somme successive dopo aver controllato 
#l’input e accettato solo valori maggiori di 0*/
def canossa(n1,n2):
    molt=0
    for i in range(n2):
        
        molt+=n1
    return molt
while True:
    n1=int(input("inserisci il primo numero: "))
    if n1>0:
        break
while True:
    n2=int(input("inserisci il secondo numero: "))
    if n2>0:
        break
print(canossa(n1,n2))