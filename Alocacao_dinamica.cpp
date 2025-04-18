#include <iostream>
#include <tchar.h>
#include <string>

//Declarando prototipo das fun��es
void recebendo(int* n, int tamanho);
void exibindo(int* n, int tamanho);


//Fun��o principal
int main()
{
	//Definindo o terminal em portugu�s
	_tsetlocale(LC_ALL, _T("portuguese"));

	//Definindo vari�veis
	std::string decisao;
	int tamanho;
	std::cout << "Digite o tamanho do vetor: ";
	std::cin >> tamanho;
	//Inicializando o new
	int* n = new int[tamanho];
	system("cls");
	//Menu de op��es
	int opcao;
	do {
		
		std::cout << "\t\tMENU\n";
		std::cout << "======================================================= \n";
		std::cout << "1 - Receber dados\t2 - Exibir dados\t3 - Sair\n";
		std::cout << "======================================================= \n";
		std::cout << "Digite a op��o desejada: ";
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
			std::cout << "Op��o inv�lida!\n";
			break;
		}
	} while (opcao!= 3);

	//Liberando a mem�ria
	std::cout << "Deseja liberar a mem�ria?: ";
	std::cin >> decisao;
	system("cls");
	if (decisao == "Sim" || decisao == "sim" || decisao == "s")
	{
		delete[] n; // Libera a mem�ria alocada
		std::cout << "Mem�ria liberada com sucesso!\n";
	}	
	else
	{
		std::cout << "Mem�ria n�o liberada!\n";
	}
		system("PAUSE");
	return 0;
	
}

//Fun��o para receber os dados
void recebendo(int *n, int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		std::cout << "Digite o valor da posi��o " << i + 1 << ": ";
		std::cin >> n[i];
	}
}

//Fun��o para exibir os dados
void exibindo(int* n, int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		std::cout << "O valor da posi��o " << i + 1 << " �: " << n[i] << "\n";
	}
}