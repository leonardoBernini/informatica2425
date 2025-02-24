#/*dato un numero a piu cifre eseguire
#la somma delle cifre e stabilire se 
#è divisibile per 3*/
n=int(input("inserisci un numero\n"))
somma=0
while n>0:
    somma+=n%10
    n//=10
print("la somma è",somma)
if somma%3==0:
    print(somma,"è divisibile per 3")
else:
    print(somma,"non è divisibile per 3")