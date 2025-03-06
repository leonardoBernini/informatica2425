#/*calcolare la somma dei primi n numeri naturali
#es: 5 1+2+3+4+5*/
n=5
somma=0
if n>0:
    for i in range(1,n+1):
        somma+=i
print(somma)