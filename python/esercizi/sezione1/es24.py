#/*dati n numeri in imput (con n>5) calcolare la somma dei numeri negativi e positivi*/
sommap=0
sommad=0
while True:
    n=int(input("inserisci un numero maggiore:\n"))
    if n>=5:
        break
for i in range(1,n+1):
    if i%2==0:
        sommap+=i
    else:
        sommad+=i

print("la somma dei pari è:",sommap,"invece quella dei dispari:",sommad)