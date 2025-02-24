#/*Dati 3 numeri stampare il più piccolo, il più grande e la loro media aritmetica.*/
a=int(input("inserisci un numero: "))
max=a
min=a
b=int(input("inserisci il secondo numero: "))
if max<b:
    max=a
if min>b:
    min=b
c=int(input("inserisci il terzo numero: "))
if max<c:
    max=c
if min>c:
    min=c
print("max=",max,"\nmin=",min,"\nla loro somma è:",max+min)
