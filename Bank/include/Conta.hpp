#ifndef CONTA_HPP
#define CONTA_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include "Agencia.hpp"
#include "Cliente.hpp"

class Acc {
    public:
        Cliente cliente;
        Agencia agencia;
        float saldo;

        Acc();
        Acc(const std::string& nome, const std::string& nome_agencia);

        void saque(float quantia);
        void deposito(float quantia);
        void transferencia(float quantia, Acc& conta);
};
#endif