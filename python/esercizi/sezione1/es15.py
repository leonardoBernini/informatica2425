#Scrivi un programma che legge in input il valore di due lati di un quadrilatero,
#// individua se si tratta di un quadrato o di un rettangolo e ne calcola il perimetro e l’area.
a=float(input("inserisci il primo lato\n"))
b=float(input("inserisci il secondo lato\n"))
if a==b:
    print("è un quadrato con l'area di",a*a,"e con il perimetro di",a*4)
else:
    print("è un rettangolo con l'area di",a*b,"e con il perimetro di",(a+b)*2)