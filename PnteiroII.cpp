#include <iostream>
#include <tchar.h>
int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	//Declarando variável controle vetor
	int n;
	//declarando ponteiros
	int* pt1, * pt2, * pt3;

	//Solicitando ao usuário  tamanho do vetor
	std::cout << "Informe  tamaho do vetor: ";
	std::cin >> n;

	system("cls"); // limpando a tela

	//criando variáveis dinamicas
	int* v1 = new int[n];
	int* v2 = new int[n];
	int* v3 = new int[n];
	//Atribuindo o endereço da variáveis dinâmicas ao ponteiros
	pt1 = v1;
	pt2 = v2;
	pt3 = v3;

	//verificando se as alocações foram realizada
	if (pt1 == NULL && pt2 == NULL && pt3 == NULL)
	{
		std::cout << "Alocação dinâmica não realizada, saindo do sistema...";
		return -1; // parando o programa
	}
	//Leitura dos dados v1
	std::cout << "Primeira atribuição\n";
	std::cout << "=======================\n";
	for (int i = 0; i < n; i++)
	{
		std::cout << "informe o " << i + 1 << " valor: ";
		std::cin >> *(pt1 + i);
	}
	system("cls");
	//Leitura dos dados v2
	std::cout << "Segunda atribuição\n";
	std::cout << "=======================\n";
	for (int i = 0; i < n; i++)
	{
		std::cout << "informe o " << i + 1 << " valor: ";
		std::cin >> *(pt2 + i);
	}
	system("cls"); // limpando a tela

	//soma dos valores
	for (int i = 0; i < n; i++)
	{
		*(pt3 + i) = *(pt1 + i) + *(pt2 + i);
	}

	//Exebição

	std::cout << "Resultado da soma dos valores \n";
	std::cout << "=======================\n";
	for (int i = 0; i < n; i++)
	{
		std::cout << "\n" << i + 1 << " Soma = " << *(pt3 + i) << std::endl;
	}

	//Deletando alocações

	delete[] v1;
	delete[] v2;
	delete[] v3;

	//Verificando se a alicação foram deletadas
	if (*v1 == NULL && *v2 == NULL && *v3 == NULL)
	{
		std::cout << "A desalocação foi realizada com êxito!!";

	}

	system("PAUSE");
	return 0;


}