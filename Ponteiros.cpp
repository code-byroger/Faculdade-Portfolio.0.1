#include <iostream>
#include <tchar.h>
int main()
{
	//Definindo o terminal em portugu�s
	_tsetlocale(LC_ALL, _T("portuguese"));

	//Declarando as vari�veis
	int n1{ 0 }, n2{ 0 }, result{ 0 };
	int* p1, * p2;

	//Apontando o endere�o de mem�ria para os ponteiros
	p1 = &n1;
	p2 = &n2;

	//Atribuindo os valores 
	std::cout << "Digite o primeiro valor: ";
	std::cin >> *p1; 

	std::cout << "Digite o segundo valor: ";
	std::cin >> *p2; 

	//atribuindo a soma dos ponteiro a vari�vel result
	result = *p1 + *p2;

	//apresentando os valores na tela
	std::cout << *p1 << " + " << *p2 << " = " << result << std::endl;
}