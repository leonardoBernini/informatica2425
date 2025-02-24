#/*Scrivi un programma in C che permetta di inserire 1 voto di uno studente.
#Poi genera casualmente un secondo voto compreso tra 4 e 8.
#Quindi permetta di scegliere quale operazione fare tra:
#- 1 mostrare la media dei due voti
#- 2 mostrare il voto maggiore tra i due
#- 3 mostrare il voto minore tra i due.
#- 4 mostrare il numero di voti sufficiente tra i due.
#Verificare che il voto inserito sia compreso tra 2 e 10.*/
import random
num=random.randint(4,8)
print(num,"è il numero casuale")
voto=int(input("inserisci il tuo voto:\n"))
print("quale opzione scegli:")
print("- 1 mostrare la media dei due voti")
print("- 2 mostrare il voto maggiore tra i due")
print("- 3 mostrare il voto minore tra i due.")
print("- 4 mostrare il numero di voti sufficiente tra i due.")
opzione=int(input())
if opzione==1:
    print((num+voto)/2)
elif opzione==2:
    if voto<num:
        print(num)
    else:
        print(voto)
elif opzione==3:
    if voto>num:
        print(num)
    else:
        print(voto)
elif opzione==4:
    if voto>=6 and num>=6:
        print(voto,"è",num,"sono sufficenti")
    elif voto>=6:
       print(voto,"è suffucente")
    elif num>=6:
       print(num,"è sufficente")
    else:
        print("i due voti non sono sufficenti")
else:
    print("opzione non valida")
