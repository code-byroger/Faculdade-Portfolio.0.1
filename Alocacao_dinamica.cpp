#include <iostream>
#include <tchar.h>
#include <string>

//Declarando prototipo das funções
void recebendo(int* n, int tamanho);
void exibindo(int* n, int tamanho);


//Função principal
int main()
{
	//Definindo o terminal em português
	_tsetlocale(LC_ALL, _T("portuguese"));

	//Definindo variáveis
	std::string decisao;
	int tamanho;
	std::cout << "Digite o tamanho do vetor: ";
	std::cin >> tamanho;
	//Inicializando o new
	int* n = new int[tamanho];
	system("cls");
	//Menu de opções
	int opcao;
	do {
		
		std::cout << "\t\tMENU\n";
		std::cout << "======================================================= \n";
		std::cout << "1 - Receber dados\t2 - Exibir dados\t3 - Sair\n";
		std::cout << "======================================================= \n";
		std::cout << "Digite a opção desejada: ";
		std::cin >> opcao;
		std::cout << "======================================================= \n";
		switch (opcao)
		{
		case 1:

			recebendo(n, tamanho);
			std::cout << "======================================================= \n";
			break;
		case 2:
			exibindo(n, tamanho);
			std::cout << "======================================================= \n";
			break;

		case 3:
			std::cout << "Saindo do programa...\n";

			break;
		default:
			std::cout << "Opção inválida!\n";
			break;
		}
	} while (opcao!= 3);

	//Liberando a memória
	std::cout << "Deseja liberar a memória?: ";
	std::cin >> decisao;
	system("cls");
	if (decisao == "Sim" || decisao == "sim" || decisao == "s")
	{
		delete[] n; // Libera a memória alocada
		std::cout << "Memória liberada com sucesso!\n";
	}	
	else
	{
		std::cout << "Memória não liberada!\n";
	}
		system("PAUSE");
	return 0;
	
}

//Função para receber os dados
void recebendo(int *n, int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		std::cout << "Digite o valor da posição " << i + 1 << ": ";
		std::cin >> n[i];
	}
}

//Função para exibir os dados
void exibindo(int* n, int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		std::cout << "O valor da posição " << i + 1 << " é: " << n[i] << "\n";
	}
}