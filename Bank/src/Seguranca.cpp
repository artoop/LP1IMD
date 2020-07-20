#include "Seguranca.hpp"

Seguranca::Seguranca()
{

}

void Seguranca::setChave(std::string chave)
{
    this->chave = chave;
}

std::string Seguranca::getChave()
{
    return chave;
}