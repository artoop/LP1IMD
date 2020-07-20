#include "Cliente.hpp"
#include <iostream>

Cliente::Cliente()
{

}

Cliente::Cliente(std::string nome)
{
    this->nome = nome;
}

void Cliente::setNome(std::string nome)
{
    this->nome = nome;
}

std::string Cliente::getNome()
{
    return nome;
}