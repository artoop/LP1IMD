#include "ClientePJ.hpp"
#include <iostream>

ClientePJ::ClientePJ(std::string razao_social)
{
    this->razao_social = razao_social;
    cnpj = "000.000.000-00";
}

ClientePJ::ClientePJ()
{
}

void ClientePJ::setRazaoSocial(std::string razao_social)
{
    this->razao_social = razao_social;
}

void ClientePJ::setCnpj(std::string cnpj)
{
    this->cnpj = cnpj;
}

std::string ClientePJ::getRazaoSocial()
{
    return razao_social;
}

std::string ClientePJ::getCnpj()
{
    return cnpj;
}