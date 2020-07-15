#include <iostream>
#include "Conta.hpp"
#include "Agencia.hpp"
#include "Cliente.hpp"

Acc::Acc()
{
    
}

Acc::Acc(const std::string& nome, const std::string& nome_agencia)
{
    cliente = Cliente(nome);
    agencia = Agencia(agencia);
    saldo = 0;

}

void Acc::saque(float quantia)
{
    saldo -= quantia;
}

void Acc::deposito(float quantia)
{
    saldo += quantia;
}

void Acc::transferencia(float quantia, Acc& conta)
{
    saldo -= quantia;
    conta.saldo += quantia;
}