#ifndef CARRO_H
#define CARRO_H

#include <iostream>
#include <string>

class Carro {
private:
    std::string nome;
    std::string placa;
    std::string fabricante;
    std::string cor;

public:
    void setReceberDados();
    void setImprimirDados();
};

#endif
