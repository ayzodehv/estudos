def soma(num1, num2):
    return num1 + num2

def subt(num1, num2):
    return num1 - num2

def mult(num1, num2):
    return num1 * num2

def divis(num1, num2):
    if num2 == 0:  # Evita erro de divisão por zero
        return "Erro! Divisão por zero."
    return num1 / num2

def main():
    first = int(input("Digite o primeiro número: "))
    second = int(input("Digite o segundo número: "))
    oper = int(input("Digite a operação: \n1 = soma\n2 = subtração\n3 = multiplicação\n4 = divisão\n"))

    if oper == 1:
        resultado = soma(first, second)
    elif oper == 2:
        resultado = subt(first, second)
    elif oper == 3:
        resultado = mult(first, second)
    elif oper == 4:
        resultado = divis(first, second)
    else:
        print("Número inválido!")
        return

    print(f"O resultado é: {resultado}")

if __name__ == "__main__":
    main()