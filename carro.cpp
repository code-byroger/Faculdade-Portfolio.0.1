#include <iostream>
#include "carro.h"
#include <string>
#include <locale>
#include <chrono>
#include <thread>

void recebendo(Carro* carro, int n);
void exibindo(Carro* carro, int n);
void menu();
void limparTerminal();

int main()
{
	// Definindo o terminal em português
    setlocale(LC_ALL, "Portuguese");

	Carro* carro = nullptr; // ponteiro que não armazena os dados
    int n = 0;

    while (true)
    {
        std::string opcao;
        menu();
		std::getline(std::cin, opcao); // Lê a opção do usuário com espaços

        //Estrutura condicional
        if (opcao == "1" || opcao == "Cadastrar veiculos")
        {
            std::cout << "Quantos carros deseja cadastrar? ";
            std::cin >> n;
            std::cin.ignore(); // Limpar o buffer
            limparTerminal();

            if (n <= 0) {
                std::cout << "Número inválido. Digite um número maior que 0.\n";
				std::this_thread::sleep_for(std::chrono::seconds(2)); // Pausa de 2 segundos
                limparTerminal();
                continue;
            }

            delete[] carro; // Libera memória anterior (se houver)
			carro = new Carro[n]; // Aloca memória para os carros dinâmicamente
            recebendo(carro, n);
        }
        else if (opcao == "2" || opcao == "Exibir veiculos")
        {
            if (carro == nullptr || n == 0) {
                limparTerminal();
                std::cout << "Nenhum veículo cadastrado!\n";
                std::this_thread::sleep_for(std::chrono::seconds(2)); // Pausa de 2 segundos
				limparTerminal();
                continue;
            }
            else {
                exibindo(carro, n);
            }
        }
        else if (opcao == "3" || opcao == "Sair")
        {
            limparTerminal();
            std::cout << "Saindo do sistema...\n";
            std::this_thread::sleep_for(std::chrono::seconds(2)); // Pausa de 2 segundos
            break;
        }
        else
        {
            limparTerminal();
            std::cout << "Opção inválida!\n";
            std::this_thread::sleep_for(std::chrono::seconds(2)); // Pausa de 2 segundos
            limparTerminal();
            continue;
        }

       
    }
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Pausa de 2 segundos
    limparTerminal();
    delete[] carro; // Liberando a  memória no final

    system("PAUSE");
    return 0;
}


//Declarações de funções

void menu()
{
    std::cout << "\t\tMENU\n";
    std::cout << "======================================================= \n";
    std::cout << "1 - Cadastrar veiculos\t2 - Exibir veiculos\t3 - Sair\n";
    std::cout << "======================================================= \n";
    std::cout << "Digite o nome ou opção desejada: ";
}

void limparTerminal()
{
    system("cls"); 
}

void recebendo(Carro* carro, int n)
{
    std::cout << "\t\tCADASTRO DE CARROS\n";
    std::cout << "======================================================= \n";
    for (int i = 0; i < n; i++)
    {
        std::cout << "Digite os dados do carro " << i + 1 << ": \n";
        carro[i].setReceberDados();
        std::cout << "--------------------------------------\n";

    }
}

void exibindo(Carro* carro, int n) {
    std::cout << "\t\tEXIBIÇÃO DE CARROS\n";
    std::cout << "======================================================= \n";
    for (int i = 0; i < n; i++)
    {
        std::cout << "Dados do carro " << i + 1 << ": \n";
        carro[i].setImprimirDados();
        std::cout << "--------------------------------------\n";

    }
}
