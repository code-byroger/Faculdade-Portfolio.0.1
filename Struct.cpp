#include <iostream>
#include <string>
#include <tchar.h>

typedef struct
{
	std::string nome;
	int quantidadeInicial;
	int quantidadeVendida;
	float valorVenda;
}Produtos;

//Prototipando as funções
void CadastrandoProdutos(Produtos* produto, int n);
void ImprimindoDados(Produtos* produto, int n);



int main()
{
	//Definindo o terminal em português
	_tsetlocale(LC_ALL, _T("portuguese"));

	//Definindo a quantidade que o usuário deseja cadastrar
	int n;
	std::cout << "\tQuantidade de produtos  a serem cadastrado\n";
	std::cout << "====================================================== \n";
	std::cin >> n;
	system("cls");

	//Alocando dinamicamente o vetor
	Produtos* produto = new Produtos[n];

	//Menu de opções
	int opcao;
	do {
		std::cout << "\t\tMENU\n";
		std::cout << "======================================================= \n";
		std::cout << "1 - Cadastrar produtos\t2 - Exibir produtos\t3 - Sair\n";
		std::cout << "======================================================= \n";
		std::cout << "Digite a opção desejada: ";
		std::cin >> opcao;

		switch (opcao)
		{
		case 1:
			std::cout << std::endl;
			system("cls");
			CadastrandoProdutos(produto, n); // Passando o argumento para cadastro o produto
			std::cout << std::endl;
			break;
		case 2:
			std::cout << std::endl;
			system("cls");
			ImprimindoDados(produto, n); // Passando o argumento para imprimir os dados
			std::cout << std::endl;
			break;
		case 3:
			std::cout << std::endl;
			system("cls");
			std::cout << "Saindo do programa...\n";
			break;
		default:
			std::cout << std::endl;
			system("cls");
			std::cout << "Opção inválida!\n";
			std::cout << std::endl;
			break;
		}
	} while (opcao != 3);

	std::string decisao;

	//Liberando a memória
	std::cout << "Deseja  liberar a memória?: ";
	std::cin >> decisao;
	system("cls");

	//Verificando se o usuário deseja liberar a memória
	if (decisao == "Sim" || decisao == "sim" || decisao == "s")
	{
		delete[] produto; // Liberando a memória
		std::cout << "Memória liberada com sucesso!\n";
	}
	else
	{
		std::cout << "Memória não liberada!\n";
	}

	system("PAUSE");
	return 0;
}

//Procedimento para cadastrar os produtos
void CadastrandoProdutos(Produtos* produto, int n)
{
	//Cadastro de produtos
	std::cout << "\t\tCADASTRO DE PRODUTOS\n";
	std::cout << "======================================================= \n";
	for (int i = 0; i < n; i++)
	{
		std::cout << "Nome do " << i + 1 << " produto: ";
		std::cin >> produto[i].nome;
		std::cout << "Quantidade inicial no estoque: ";
		std::cin >> produto[i].quantidadeInicial;
		std::cout << "Quantidade vendida: ";
		std::cin >> produto[i].quantidadeVendida;
		std::cout << "Valor de venda R$ ";
		std::cin >> produto[i].valorVenda;

	}
}

//Procedimento para imprimir os dados
void ImprimindoDados(Produtos* produto, int n)
{
	//Exibindo os dados
	std::cout << "\t\tPRODUTO EM ESTOQUE  \n";
	std::cout << "======================================================= \n";
	for (int i = 0; i < n; i++)
	{
		int restante = produto[i].quantidadeInicial - produto[i].quantidadeVendida;
		std::cout << "Produto: " << produto[i].nome << "\n" << "Restante em estoque: " << restante << std::endl;

	}
}
