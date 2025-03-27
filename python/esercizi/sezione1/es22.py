#dati n numeri, sommarli 4 a 4  termina non appena intuduce un 0
somma=0
cnt=0
while True:
    n=int(input("inserisci un numero:\n"))
    cnt+=1
    somma=somma+n
    if n==0:
        break
    
    if cnt==4:
        print("la somma è:",somma)
        somma=0

    
