import random
numero = random.randint(1, 10)  # Da 1 a 10 (inclusi)
print(numero)

numero = random.randrange(1, 10)  # Da 1 a 9
print(numero)

numero = random.random()  # Float tra 0 e 1
print(numero)

numero = random.uniform(1.5, 5.5)  # Float tra 1.5 e 5.5
print(numero)

frutta = ["mela", "banana", "ciliegia", "uva"]
scelta = random.choice(frutta)
print(scelta)

carte = ["A", "K", "Q", "J"]
random.shuffle(carte)  # Mescola la lista
print(carte)

