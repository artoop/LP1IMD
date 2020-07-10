#include "Produto.hpp"

Produto::Produto()
{

}

Produto::Produto(std::string codigo, std::string nome, UnidadeMedida unidadeMedida, double preco)
{
    this->codigo = codigo;
    this->nome = nome;
    this->unidadeMedida = unidadeMedida;
    this->preco = preco;
}

Produto::~Produto()
{
    
}

std::string Produto::getCodigo()
{
    return codigo;
}

std::string Produto::getNome()
{
    return nome;
}

UnidadeMedida Produto::getUnidade()
{
    return unidadeMedida;
}

double Produto::getPreco()
{
    return preco;
}



