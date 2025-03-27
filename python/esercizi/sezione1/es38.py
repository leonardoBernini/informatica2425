#/*Scrivete una funzione con parametro un intero n(passato per valore) che 
#stabilisca se n è un numero primo. La funzione restituirà 1 se il numero è primo altrimenti 0.
def primo(n):
    prim=0
    for i in range(1,n+1):
        if n%i==0:
            prim+=1
        
    if prim==2:
        return 1
    else:
        return 0
n1=int(input("inserisci un numero:\n"))
print(primo(n1))