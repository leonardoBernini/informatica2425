#/*dati imput 10 numeri interi dertmina il maggiore e quante volte compare*/
max=0
cnt=0
for i in range(1,11):
    n=int(input("inserisci un numero\n "))
    if n>max or i==1:
        max=n
        cnt=1
    elif n==max or i==1:
        cnt+=1
print("il maggiore è ",max,"e appare",cnt,"volte")
        