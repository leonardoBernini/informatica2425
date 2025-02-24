a=0
b=0
if  a>b: #if
    a=5
elif b>a: #else if
    b=5
else:     #else-if
    a=b   
while a>b:  #ciclo while
    b+=b


for i in range(5):  # Da 0 a 4 (5 escluso)
    print(i)
frutta = ["mela", "banana", "ciliegia"]

for frutto in frutta:
    print(frutto)


x = 0
while True:  # Simula il "do"
    print(x)
    x += 1
    if x >= 5:  # Controllo della condizione alla fine
        break  # Esce dal ciclo