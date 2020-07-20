#include "ClientePJ.hpp"
#include <iostream>

ClientePJ::ClientePJ()
{
    cnpj = "000.000.000-00";
}

void ClientePJ::setCnpj(std::string cnpj)
{
    this->cnpj = cnpj;
}

std::string ClientePJ::getCnpj()
{
    return cnpj;
}