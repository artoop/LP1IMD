#include "Cliente.hpp"
#include <iostream>

Cliente::Cliente(std::string nome)
{
    this->nome = nome;
    cpf = "000.000.000-00";
}

Cliente::Cliente()
{
}

void Cliente::setNome(std::string nome)
{
    this->nome = nome;
}

void Cliente::setCpf(std::string cpf)
{
    this->cpf = cpf;
}

std::string Cliente::getNome()
{
    return nome;
}

std::string Cliente::getCpf()
{
    return cpf;
}