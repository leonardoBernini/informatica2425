#/*Gioco
#della Morra cinese: supponendo sasso=1, carta=2, forbice=3, chiedere
#all’utente la sua scelta e far generare al computer la sua.
#Stabilire il vincitore
#*/
import random
import sys
nome=input("inserisci il tuo nome: ")
print("inserisci la tua scelta ")
g1=int(input("sasso=1, carta=2, forbice=3:\n"))
g2=random.randint(1,3)
if g2==1:
    print("il computer ha scelto sasso")
if g2==2:
    print("il computer ha scelto carta")
if g2==3:
    print("il computer ha scelto forbice")
    
if g1 !=1 and g1!=2 and g1!=3:
    print("scelta non valida")
    sys.exit
elif g1==1 and g2==3:
    print(nome,"hai vinto")
elif g1==2 and g2==1:
    print(nome,"hai vinto")
elif g1==3 and g2==2:
    print(nome,"hai vinto")
elif g1==3 and g2==1:
    print("il computer ha vinto")
elif g1==1 and g2==2:
    print("il computer ha vinto")
elif g1==2 and g2==3:
    print("il computer ha vinto")
else:
    print("pareggio")


