#Verificare se un numero dato in input è divisibile sia per 3 sia per 5
n=int(input("inserisci un valore"))
if n%3==0 and n%5==0:
    print("in numero scelto  divisibile sia per 3 che per 5")
else:
    print("in numero scelto non divisibile sia per 3 che per 5")