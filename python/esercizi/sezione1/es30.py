#/*scrivi un programma che dati imput n numeri interi e un
#numero x determini: 
#- quanti numeri sono maggiori di x 
#-quanti numeri sono minori di x
#-quanti numeri sono uguali
mag=0
ugg=0
miin=0
x=int(input("inserisci x:\n"))
while True:
    n=int(input("inserisci un numero: "))
    if n>x:
        mag+=1
    elif n<x:
        miin+=1
    elif n==x:
        ugg+=1
    continuo=input("digita 'si' per continuare:\n")
    if continuo!='si':
        break
print("i maggiori di",x,"sono",mag,"i minori sono: ",miin,"quelli uguali sono:",ugg)