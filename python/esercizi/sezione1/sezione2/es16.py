#/*Dato un numero stampare tutto i suoi divisori e scoprire se è un numero primo 
num=int(input("inserisci un numero: "))
i=1
primo=0
while i<=num:
    
    if num%i==0:
        print(i)
        primo=primo+i
    i=i+1
if primo==num+1:
    print(num,"è un numero primo")
