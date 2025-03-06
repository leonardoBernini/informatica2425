#/*Scrivete una funzione avente due parametri interi b ed e che calcoli
# la potenza b^e con il metodo delle moltiplicazioni successive*/
def potenza(b,e):
    pot=1
    for i in range(e):
        pot*=b
    return pot

b=int(input("inserisci un numero\n"))
e=int(input("inseisci la potenza:\n"))
print(potenza(b,e))