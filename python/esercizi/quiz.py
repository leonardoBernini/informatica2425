import time #time.sleep(secondi)
import os #os.system("cls" if os.name == "nt" else "clear")

def domanda1(punti):
    print("ora iniziamo con la prima domanda")
    time.sleep(1)
    print("1° domanda")
    print("quale è il mio deck preferito di yu-gi-oh?")
    print("1.galaxy-eyes")
    print("2.branded")
    print("3.d/d/d")
    print("4.ala negra")

    risposta=int(input())
    if risposta==1:
        punti+=3
    elif risposta==2:
        punti+=2
    elif risposta==3:
        punti+=1
    elif risposta==0:
        punti+=0
    else:
        punti-=3
    time.sleep(1)
    os.system("cls" if os.name == "nt" else "clear")
    time.sleep(1)
    return punti
def domanda2(punti):
    print("2° domanda")
    print("quale la categoria di pesrsone che odio piu di tutti?")
    print("1.i negri")
    print("2.i gay")
    print("3.le minnoranze")
    print("4.tutti quelli che hanno idee diverse")
    risposta=int(input())
    if risposta==4:
        punti+=3
    elif risposta==3:
        punti+=2
    elif risposta==2:
        punti+=1
    elif risposta==1:
        punti+=0
    else:
        punti-=3
    time.sleep(1)
    os.system("cls" if os.name == "nt" else "clear")
    time.sleep(1)
    return punti
def domanda3(punti):
    print("3° domanda")
    print("quale è il mio stand preferito?")
    print("1.wonder of you")
    print("2.d4c")
    print("3.za warudo")
    print("4.golden experience requiem")
    risposta=int(input())
    if risposta==3:
        punti+=3
    elif risposta==4:
        punti+=2
    elif risposta==2:
        punti+=1
    elif risposta==1:
        punti+=0
    else:
        punti-=3
    time.sleep(1)
    os.system("cls" if os.name == "nt" else "clear")
    time.sleep(1)
    return punti
def domanda4(punti):
    print("4° domanda")
    print("quale è la mia materia preferita?")
    print("1.tutte quelle di bardini")
    print("2.tutte quelle di canossa")
    print("3.informatica")
    print("4.motoria")
    risposta=int(input())
    if risposta==1:
        punti+=3
    elif risposta==3:
        punti+=2
    elif risposta==4:
        punti+=1
    elif risposta==2:
        punti+=0
    else:
        punti-=3
    time.sleep(1)
    os.system("cls" if os.name == "nt" else "clear")
    time.sleep(1)
    return punti
def domanda5(punti):
    print("5° domanda")
    print("il mio personaggio preferito di tutte le sage di yu-gi-oh")
    print("1.jesse anderson")
    print("2.bakura")
    print("3.yugi")
    print("4.kait/kaito")
    risposta=int(input())
    if risposta==2:
        punti+=3
    elif risposta==4:
        punti+=2
    elif risposta==1:
        punti+=1
    elif risposta==3:
        punti+=0
    else:
        punti-=3
    time.sleep(1)
    os.system("cls" if os.name == "nt" else "clear")
    time.sleep(1)
    return punti
def domanda6(punti):
    print("6° domanda")
    print("quale nazione farei sparire dalla faccia della  terra ")
    print("1.francia")
    print("2.germania")
    print("3.grecia")
    print("4.inghilterra")
    risposta=int(input())
    if risposta==1:
        punti+=3
    elif risposta==4:
        punti+=2
    elif risposta==2:
        punti+=1
    elif risposta==3:
        punti+=0
    else:
        punti-=3
    time.sleep(1)
    os.system("cls" if os.name == "nt" else "clear")
    time.sleep(1)
    return punti
def domanda7(punti):
    print("7° domanda")
    print("quale è il mio dittatore preferito?")
    print("1.hitler")
    print("2.stalin")
    print("3.benito mussolini")
    print("4.francisco franco")
    risposta=int(input())
    if risposta==3:
        punti+=3
    elif risposta==1:
        punti+=2
    elif risposta==4:
        punti+=1
    elif risposta==2:
        punti+=0
    else:
        punti-=3
    time.sleep(1)
    os.system("cls" if os.name == "nt" else "clear")
    time.sleep(1)
    return punti

def domanda8(punti):
    print("8° domanda")
    print("chi è il goat del calci?")
    print("1.caputo prime(trm)")
    print("2.cassano che non dice cazzate")
    print("3.moscardelli con la barba sudata")
    print("4.mr popo lengendary super sayan 5")
    risposta=int(input())
    if risposta==3:
        punti+=3
    elif risposta==4:
        punti+=2
    elif risposta==1:
        punti+=1
    elif risposta==2:
        punti+=0
    else:
        punti-=3
    time.sleep(1)
    os.system("cls" if os.name == "nt" else "clear")
    time.sleep(1)
    return punti
def domanda9(punti):
    print("9° domanda")
    print("quale la forma della terra?")
    print("1.rotonda")
    print("2.piatta")
    print("3.prismatica")
    print("4.piramide co la base quadrata")
    risposta=int(input())
    if risposta==3:
        punti+=3
    elif risposta==4:
        punti+=2
    elif risposta==2:
        punti+=1
    elif risposta==1:
        punti+=0
    else:
        punti-=3
    time.sleep(1)
    os.system("cls" if os.name == "nt" else "clear")
    time.sleep(1)
    return punti
def domanda10(punti):
    print("10° domanda")
    print("il miglior poeta mai esistito")
    print("1.manzoni(don rodrigo power)")
    print("2.dante(la carta di yu-gi.oh)")
    print("3.dante(quello simp)")
    print("4.pacciani")
    risposta=int(input())
    if risposta==4:
        punti+=3
    elif risposta==1:
        punti+=2
    elif risposta==2:
        punti+=1
    elif risposta==3:
        punti+=0
    else:
        punti-=3
    time.sleep(1)
    os.system("cls" if os.name == "nt" else "clear")
    time.sleep(1)
    return punti
punti=0
print("buongiorno giocatore, quello che stai per participare è il quiz supremo sul prossimo dittatore d'italia")
time.sleep(3)
print("ti va di participare?")
risp=input()
time.sleep(1)
print("credi veramente che io sia cosi gentile da chiederti di participare")
print("è ovvio che sei obbligato")
time.sleep(5)
os.system("cls" if os.name == "nt" else "clear")
print("vabbe dai, almeno ti spiego come funziona")
time.sleep(2)
print("il quiz è strutturato in 10 domande e in base alla tua risposta guadagnerai dei punti")
print("alla fine in base ai punti guadagnati ti verra assegnata una classe")
print("hai capito?")
risp=input()
print("scerzavo non me ne frega un cazzo se hai capito")
time.sleep(5)
os.system("cls" if os.name == "nt" else "clear")
print("prima di iniziare inserisci il tuo nome:")
nomfalso=input()
time.sleep(2)
print(nomfalso,"sei serio, questo quiz lo giochera una sola persona")
print("quindi d'ora in poi ti chiamero lory-gay")
time.sleep(6)
os.system("cls" if os.name == "nt" else "clear")

punti=domanda1(punti)
punti=domanda2(punti)
punti=domanda3(punti)
punti=domanda4(punti)
punti=domanda5(punti)
punti=domanda6(punti)
punti=domanda7(punti)
punti=domanda8(punti)
punti=domanda9(punti)
punti=domanda10(punti)
print("hai totalizato",punti,"punti")
if punti<0:
    print("complimenti hai sboccato la categoria segreta ovvero omosesuale lengendary super saiyan 4 ultra istinct")
elif punti<=10:
    print("la tua categoria è: partecipante di gay pride")
elif punti <=20:
    print("la tua categoria è: succhiatore di palle di negro")
elif punti<30:
    print("la tua categoria è: inculatore di bambini")
elif punti==30:
    print("la tua categoria è: aspirante dittatore") 