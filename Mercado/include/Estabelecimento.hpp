#ifndef ESTABELECIMENTO_HPP
#define ESTABELICIMENTO_HPP

#include "Produto.hpp"
#include <vector>
#include <string>
#include <list>
#include <unordered_map>
#include <fstream>
#include <sstream>

class Estabelecimento {
    private:
        std::list<Produto> produtos;
        std::unordered_map<std::string,int> estoque;
        std::unordered_map<std::string, int> vendas;
        std::string arquivo;
    
    public:
        Estabelecimento();
        Estabelecimento(const std::string& arquivo);
        ~Estabelecimento();

        UnidadeMedida str_to_unidade(std::string str_unidade);
        std::string unidade_to_string(UnidadeMedida unidade);
        double str_to_double(std::string str_preco);
        void ler_arquivo();
        void listar();
        bool em_estoque(std::string codigo, int quantidade);
        void venda(std::string codigo, int quantidade);
        void caixa();
        Produto* busca(std::string codigo);
};
#endif