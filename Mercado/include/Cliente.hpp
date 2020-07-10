#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include "Produto.hpp"
#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <fstream>

class Cliente {
    private:
        double saldo;
        std::vector<Produto> sacola;
        std::unordered_map<std::string, int> sacola_qtd;
    
    public:
        Cliente();
        Cliente(double saldo);
        ~Cliente();
        
        bool tem_saldo(double preco);
        void compra(Produto produto, int qtd);  
        void verSacola();
        double getSaldo();
        void setSaldo(double saldo);
        void registro(std::string nome_arquivo);
        Produto* busca(std::string codigo);
};
#endif