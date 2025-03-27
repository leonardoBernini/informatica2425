#/*Scrivi un programma che effettua il calcolo della media dei voti della pagella, 
# inserendoli uno alla 
#volta e chiedendo a ogni inserimento di un numero se i voti da inserire 
#sono terminati accettando come risposta S oppure N*/
media=0
voto=0
while True:
    n=int(input("inserisci il tuo voto: "))
    voto+=1
    media+=n
    print("la tua media e di ",media/voto)
    cont=input("inserisci y per terminare se no premi qualsiasi altro tasto:\n")

    if cont!='y':
        break


