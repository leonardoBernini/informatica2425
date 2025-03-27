# leggere una sequenzadi numeri visualizarla.
#si termina nonappena arriva uno 0
cnt=0
while True:
    n=int(input("inserisci un valore:\n"))
    cnt+=1
    if n==0:
        break
print("hai inserito",cnt,"valori")