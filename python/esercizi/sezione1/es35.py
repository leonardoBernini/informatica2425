#/*dato il raggio calcolare la cicorferenza e larea del cerchio */
def area(raggio,pi):
    area=0
    area=raggio**2*pi
    return area
def circonferenza(raggio,pi):
    circo=0
    circo=(pi*2)*raggio
    return circo
raggio=int(input("inserisci il raggio:\n"))
pigreco=3.14
print(area(raggio,pigreco))
print(circonferenza(raggio,pigreco))