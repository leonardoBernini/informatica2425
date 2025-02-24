#/*INSERIRE UNA SERIE DI VALORI FIN QUANDO LA LORO SOMMA NON SUPERA
#200, CALCOLARNE LA MEDIA E IL NUMERO DI VALORI INSERITI.*/
x = 0
while True:  
    n=int(input("inserisci un numero:\n"))
    x+=n
    if x >= 200:  
        break  
