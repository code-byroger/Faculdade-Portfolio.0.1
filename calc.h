#include <iostream>
//Funções
float soma(float a, float b)
{
	return a + b;
}

float subtracao(float a, float b)
{
	return a - b;
}
float multiplicacao(float a, float b)
{
	return a * b;
}
float divisao(float a, float b)
{
	if (b == 0)
	{
		std::cout << "Divisão por zero não é permitida.\n";
		return 0;
	}
	return a / b;
}