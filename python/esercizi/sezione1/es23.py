#/*progettare un algoritmo che lagga un numero b<a e
 #scriva quante volte a è divisibile per b
 #es a= 162 b=3 a è divisibille 4 volte per b*/
a=int(input("inserisci a:\n"))
a1=a
cnt=0
while True:
    b=int(input("inserisci a:\n"))
    if b<a:
         break
while a%b==0:
     cnt+=1
     a=a//b
print(a1,"è divisibile per",b,",",cnt,"volte")