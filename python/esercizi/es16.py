#/*Dato un numero stampare tutto i suoi divisori e scoprire se è un numero primo 
num=int(input("inserisci un numero:\n"))
i=0
primo=0
while i<num:
    
    if num%i==0:
        print(i)
        primo+=i
    i+=1
if primo==num+1:
    print()
