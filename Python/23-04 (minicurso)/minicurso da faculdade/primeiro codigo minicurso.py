def adicionar_nome(vetor, nome):
    vetor.append(nome)
    print(f"Nome {nome} adicionado.")
    
def remover_nome(vetor, nome):
    if nome in vetor:
        vetor.remove(nome)
        print(f"Nome {nome} removido.") 
        
def listar_nomes(vetor):
    if vetor:
        print("Nomes da lista: ")
        for nome in vetor:
            print(f"{nome}")
    else:
        print("A lista está vazia.")
        
def main():
    vetor = []
    while True:
        print("\nVetor de Nomes")
        print("\n1. Adicionar nomes")
        print("\n2. Remover nomes")
        print("\n3. Listar nomes")
        print("\n4. Sair")
        opcao = int(input("Entre com a opção: "))
        if opcao == 1:
            nome = input("Nome: ")
            adicionar_nome(vetor, nome)
        elif opcao == 2:
            nome = input("Nome para remover: ")
            remover_nome(vetor, nome)
        elif opcao == 3:
            listar_nomes(vetor)
        elif opcao == 4:
            print("Encerrando...")
            break
        else:
            print("Opção inválida, tente novamente.")
main()