#include "Banco.hpp"
#include <vector>
#include <iostream>

Banco::Banco()
{

}

void Banco::add(std::string nome, std::string agencia)
{
    Acc conta(nome, agencia);
    contas.push_back(conta);
}

int Banco::qtd_acc()
{
    return contas.size();
}