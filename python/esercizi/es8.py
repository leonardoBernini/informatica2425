#/*CONTARE IL NUMERO DI CIFRE DI CUI SI COMPONE UN NUMERO DATO E
#COMUNICARE QUANTE VOLTE COMPARE LA CIFRA DI VALORE K CHIESTA
#ALL’UTENTE.
cifre=0
k=0
ncifre=0
n=int(input("inserisci un numero:\n"))
k=int(input("inserisci k:\n"))
while n>0:
    ncifre+=1
    if n%10==k:
        cifre+=1
    n=n//10

print("il numero scelto appare",cifre,"volte ed composto da",ncifre,"cifre")