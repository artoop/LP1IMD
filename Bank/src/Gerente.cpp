#include "Gerente.hpp"

Gerente::Gerente()
{

}

void Gerente::setChaveAcesso(std::string chave_acesso)
{
    this->chave_acesso = chave_acesso;
}

std::string Gerente::getChaveAcesso()
{
    return chave_acesso;
}