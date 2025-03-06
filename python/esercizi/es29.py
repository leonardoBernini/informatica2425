#/*es pag 223 n17: 
 #scrivi un programma che richiede i primi 3 numeri perfetti 
 #e li visualizza sullo scermo
 #es n-6 div 1,2,3 somma 1+2+3
 #6-28-496*/
n=1
i=0

while i<3:
    d=1
    somma=0
    j=1
    while j<n:
        if n%j==0:
            somma+=j
        j+=1
    if somma==n:
        print(n)
        i+=1
    n+=1

