#/* Calcolare il fattoriale di un numero 
#  Es: 7!= 1*2*3*4*5*6*7     */
def fattoriale(fat):
    somma=1
    for i in range(1,fat+1):
        print(i,"*",end='')
        somma*=i
    return somma
n=int(input("inserisci un numero: "))
fat=fattoriale(n)
print("\b=",fat)