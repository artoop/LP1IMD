#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include <string>

enum UnidadeMedida { pacote, lata, quilo , desconhecido };

class Produto {
    private:
        std::string codigo;
        std::string nome;
        UnidadeMedida unidadeMedida;
        double preco;

    public:
        Produto();
        Produto(std::string codigo, std::string nome, UnidadeMedida unidadeMedida, double preco);
        ~Produto();

        std::string getCodigo();
        std::string getNome();
        UnidadeMedida getUnidade();
        double getPreco();
};
#endif