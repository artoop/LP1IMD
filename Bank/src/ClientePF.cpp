#include "ClientePF.hpp"
#include <iostream>

ClientePF::ClientePF()
{
    cpf = "000.000.000-00";
}

void ClientePF::setCpf(std::string cpf)
{
    this->cpf = cpf;
}

std::string ClientePF::getCpf()
{
    return cpf;
}