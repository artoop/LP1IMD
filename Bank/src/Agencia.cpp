#include "Agencia.hpp"
#include <iostream>

Agencia::Agencia(std::string nome)
{
    this->nome = nome;
    id = "xxx-x";
}

Agencia::Agencia()
{
}

void Agencia::setNome(std::string nome)
{
    this->nome = nome;
}

std::string Agencia::getNome()
{
    return nome;
}

void Agencia::setId(std::string id)
{
    this->id = id;
}

std::string Agencia::getId()
{
    return id;
}