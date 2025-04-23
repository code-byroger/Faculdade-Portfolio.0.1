#include <iostream>
#include "calc.h"
#include <locale>

void menu();
void limpandoTerminal();

int main()
{
	// Definindo o terminal em português
	setlocale(LC_ALL, "Portuguese");

	//Definindo variáveis 
	float num1, num2;

	//Definindo variável de controle
	int opcao{ 0 };
	do {
		menu();
		std::cout << "Digite a opção desejada: ";
		std::cin >> opcao;
		limpandoTerminal();
		switch (opcao)
		{
		case 1: 
			menu();
			std::cout << "Digite o primeiro número: ";
			std::cin >> num1;
			std::cout << "Digite o segundo número: ";
			std::cin >> num2;
			std::cout << "======================================================= \n";
			std::cout << num1 << " + " << num2 << " = " << soma(num1, num2) << std::endl;
			std::cout << "\n======================================================= \n";

			break;
		case 2:
			menu();
			std::cout << "Digite o primeiro número: ";
			std::cin >> num1;
			std::cout << "Digite o segundo número: ";
			std::cin >> num2;
			std::cout << "======================================================= \n";
			std::cout << num1 << " - " << num2 << " = " << subtracao(num1, num2) << std::endl;
			break;
		case 3:
			menu();
			std::cout << "Digite o primeiro número: ";
			std::cin >> num1;
			std::cout << "Digite o segundo número: ";
			std::cin >> num2;
			std::cout << "======================================================= \n";
			std::cout << num1 << " x " << num2 << " = " << multiplicacao(num1, num2) << std::endl;
			break;
		case 4:
			menu();
			std::cout << "Digite o primeiro número: ";
			std::cin >> num1;
			std::cout << "Digite o segundo número: ";
			std::cin >> num2;
			std::cout << "======================================================= \n";
			std::cout << num1 << " / " << num2 << " = " << divisao(num1, num2) << std::endl;
			break;;
		case 5:
			std::cout << "Saindo do programa...\n";
			break;
		default:
			std::cout << "Opção inválida!\n";
			break;
		}
	} while (opcao != 5);

	system("PAUSE");
	return 0;
}

void menu()
{
	std::cout << "\t\tMENU\n";
	std::cout << "======================================================= \n";
	std::cout << "1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n5 - Sair\n";
	std::cout << "======================================================= \n";
}
void limpandoTerminal()
{
	system("cls");
}
