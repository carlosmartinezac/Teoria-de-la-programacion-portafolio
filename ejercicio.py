contador = 0

num = int(input("Ingrese un número: "))

while num >= 0:
    if num % 2 == 0:
        contador += 1

    num = int(input("Ingrese un número: "))

print("Cantidad de números pares:", contador)