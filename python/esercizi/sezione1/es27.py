#/*stampa i primi n numeri dispari
# successivi al numero a*/
a=int(input("inserisci un numero:\n"))
ns=int(input("inserisci quanti numeri dispari vuoi avere: "))
i=1

while(ns>=i):
    if a%2==0:
        a+=1
        print(a)
        i+=1
    else:
        print(a+2)
        a=a+2
        i+=1