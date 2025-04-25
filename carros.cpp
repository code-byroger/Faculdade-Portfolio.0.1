#include "carro.h"

void Carro::setReceberDados()
{
    std::cout << "Nome do carro: ";
    std::getline(std::cin, nome);
    std::cout << "Placa do carro: ";
    std::getline(std::cin, placa);
    std::cout << "Fabricante do carro: ";
    std::getline(std::cin, fabricante);
    std::cout << "Cor do carro: ";
    std::getline(std::cin, cor);
}

void Carro::setImprimirDados()
{
    std::cout << "Nome do carro: " << nome << std::endl;
    std::cout << "Placa do carro: " << placa << std::endl;
    std::cout << "Fabricante do carro: " << fabricante << std::endl;
    std::cout << "Cor do carro: " << cor << std::endl;
}
