#/*Dato un numero stampare tutto i suoi divisori e scoprire se è un numero primo 
n=int(input("inserisci un numero\n"))
primo=0
for i in range(1,n+1):
    if n%i==0:
        print(i)
        primo+=1
if primo==2:
    print(n,"è primo")
    