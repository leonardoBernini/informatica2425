#/*DATA UNA COPPIA DI NUMERI INTERI COSTRUIRE UN MENÙ TALE CHE
#PREVEDA:
#1) LA SOMMA IN VALORE ASSOLUTO;
#2) LA DIFFERENZA TRA IL MAGGIORE E IL MINORE;
#3) GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI
#AVVICINA DI PIÙ;
#4) DETERMINARE SE UNO È MULTIPLO DELL’ALTRO.*/
import random
n=int(input("inserisci il primo numero:\n"))
n1=int(input("inserisci il secondo numero:\n"))
print("scegli la opzione che desidera")
print("1) LA SOMMA IN VALORE ASSOLUTO;")
print("2) LA DIFFERENZA TRA IL MAGGIORE E IL MINORE;")
print("3) GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI")
print("4) DETERMINARE SE UNO È MULTIPLO DELL’ALTRO.")
scelta=int(input())
if scelta==1:
    somma=abs(n+n1)
    print("somma=",somma)
elif scelta==2:
    differenza=max(n1,n)-min(n1,n)
    print(differenza)
elif scelta==3:
    k=random.randint(1,1000)
    print("il numero casuale è",k)
    distanza_n1 = abs(n1 - k)
    distanza_n = abs(n - k)

    if distanza_n1 < distanza_n:
        print(n1, "è più vicino a", k)
    elif distanza_n < distanza_n1:
        print(n, "è più vicino a", k)
    else:
        print(n1, "e", n, "sono equidistanti da", k)
elif scelta==4:
    if n==n1:
        print("i 2 numeri sono uguali")
    elif n%n1==0:
        print(n1,"è un multiplo di ",n)
    elif n1%n==0:
        print(n," un multiplo di ",n1)
    else:
        print("nessuno dei 2 numeri è multiplo dell'altro")
else:
    print("scelta non valida")
   
