#/*Esercizio n°18
#Scrivi un programma che esegue il calcolo del fattoriale di un numero num inserito.*/
fatt=1
n=5
for i in range(1,n+1):
    fatt*=i
    print(i,"*", end='')
print("\b=",fatt)