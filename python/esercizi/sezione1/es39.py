#/*dato un valore stampare i suoi fattori
#es: 28 =2*2*7  2,2,7*/
def fat(n):
    fattore=0
    cnt=2
    while fattore==0:
        if n%cnt==0:
            print(cnt)
            n=n/cnt;
            fattore=1
        cnt+=1
    return n


n=int(input("inserisci un numero:\n"))
while n>1:
    n=fat(n)