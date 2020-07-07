#include "Cliente.h"
#include <iostream>

Client::Client(std::string name)
{
    setName(name);
    setCpf("000.000.000-00");
}

Client::Client()
{
}

void Client::setName(std::string name)
{
    this->name = name;
}

void Client::setCpf(std::string cpf)
{
    this->cpf = cpf;
}

std::string Client::getName()
{
    return name;
}

std::string Client::getCpf()
{
    return cpf;
}