#include "Cliente.hpp"

Cliente::Cliente()
{

}

Cliente::Cliente(double saldo)
{
    this->saldo = saldo;
    if(saldo < 0)
        this->saldo = 0;   
}

Cliente::~Cliente()
{
    
}

Produto* Cliente::busca(std::string codigo)
{
    for(auto& c : sacola)
    {
        if (codigo == c.getCodigo())
        {
            return &c;
        }
    }
    return nullptr;
}

void Cliente::compra(Produto produto, int qtd)
{
    saldo -= produto.getPreco()*qtd;

    if(busca(produto.getCodigo()) == nullptr)
    {
        sacola.push_back(produto);
    }
    sacola_qtd[produto.getCodigo()] += qtd;
}

void Cliente::registro(std::string nome_arquivo)
{
    std::ofstream arquivo_saida(nome_arquivo);
    arquivo_saida << "::::::::::ITENS COMPRADOS::::::::::" << std::endl << std::endl;
    
    for(auto& s : sacola)
    {
        arquivo_saida << "Item: " 
        << s.getNome() << " | Quantidade: " << sacola_qtd[s.getCodigo()] << std::endl;
    }
}

void Cliente::verSacola()
{
    system("clear");
    std::cout << "::::::::::::SACOLA:::::::::::: " << std::endl << std::endl;
    for(auto& s : sacola)
    {
        std::cout << "Item: " << s.getNome() << " | Quantidade: " << sacola_qtd[s.getCodigo()] << std::endl;
    }
    std::cout << std::endl << "Aperte ENTER para continuar" << std::endl;
    std::getchar();
    std::getchar();
}

double Cliente::getSaldo()
{
    return saldo;
}

void Cliente::setSaldo(double saldo)
{
    this->saldo = saldo;
}

bool Cliente::tem_saldo(double preco)
{
    return preco<=saldo;
}
