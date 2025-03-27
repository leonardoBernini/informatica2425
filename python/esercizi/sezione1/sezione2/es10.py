#/*VERIFICARE SE UN NUMERO È POTENZA DEL 2 E SE LO È DETERMINARE
#L’ESPONENTE.*/
import sys
import math
n=int(input("inserisci un numero:\n"))
no=n
cnt=0
while n>1:
    if n%2==0:
        cnt+=1
        n=n//2
    else:
        print("il numero scelto non è una potenza di 2")
        sys.exit()
    
print(no,"è una potenza di 2^",cnt)