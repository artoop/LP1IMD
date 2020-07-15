#ifndef BANCO_HPP
#define BANCO_HPP

#include <vector>
#include "Conta.hpp"

class Banco {
    public:
        Banco();

        std::vector<Acc> contas;

        void add(std::string nome, std::string angencia);
        int qtd_acc();
};
#endif