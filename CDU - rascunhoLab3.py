#feito por Felipe Braga em 30/04/2026

print("Identificando unidade, dezena e centena de um valor")
numero = int(input("Valor: "))

'''
if((numero > 0) and (numero < 10)):
    print(f"Algarismo da unidade: {numero}")

if ((numero >= 10) and (numero < 100)):
    print(f"Algarismo da unidade: {numero % 10}")
    numero = numero // 10
    print(f"Algarismo da dezena: {numero % 10}")

if((numero >= 100) and (numero < 1000)):
    print(f"Algarismo da unidade: {numero % 10}")
    numero = numero // 10
    print(f"Algarismo da dezena: {numero % 10}")
    numero = numero // 10
    print(f"Algarismo da centena: {numero % 10}")
'''

#Escrevendo de outra forma...
unidade = numero % 10

numero = numero // 10

dezena = numero % 10

numero = numero // 10

centena = numero % 10

print(f"Unidade: {unidade}")
print(f"Dezena: {dezena}")
print(f"Centena: {centena}")
