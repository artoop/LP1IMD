#include "Estabelecimento.hpp"
#include <iostream>
#include <iomanip>

Estabelecimento::Estabelecimento()
{

}

Estabelecimento::Estabelecimento(const std::string& arquivo)
{
    this->arquivo = arquivo;

    ler_arquivo();
}

Estabelecimento::~Estabelecimento()
{
    
}

std::string Estabelecimento::unidade_to_string(UnidadeMedida unidade)
{
    switch(unidade)
    {
        case pacote: return "Pacote"; break;
        case lata: return "Lata"; break;
        case quilo: return "Quilo"; break;
        case desconhecido: return "desconhecido"; break;
        default: return "desconhecido"; break;
    }
}

UnidadeMedida Estabelecimento::str_to_unidade(std::string str_unidade)
{
   if(str_unidade.compare("Pacote") == 0)
   {
       return pacote;
   }
   else if(str_unidade.compare("Lata") == 0)
   {
       return lata;
   }
   else if(str_unidade.compare("Quilo") == 0)
   {
       return quilo;
   }
   else return desconhecido;
}

double Estabelecimento::str_to_double(std::string str_double)
{
    str_double = str_double.substr(4, str_double.length()-5);
    return stod(str_double);
}

void Estabelecimento::ler_arquivo()
{
    std::ifstream arquivo_entrada(arquivo);
    std::string linha;

    if(arquivo_entrada.fail())
    {
        std::cout << "Arquivo inexistente." << std::endl;
    }
    else
    {
        std::string cod, nome, unidadeMed, preco, qtd;
        std::getline(arquivo_entrada, linha);
        while(std::getline(arquivo_entrada, linha))
        {
            std::stringstream stream(linha);
            std::getline(stream, cod, ',' );
            std::getline(stream, nome, ',' );
            std::getline(stream, unidadeMed, ',');
            std::getline(stream, preco, ',');
            std::getline(stream, qtd);
            
            produtos.push_back(Produto(cod, nome,str_to_unidade(unidadeMed), str_to_double(preco)));
            estoque[cod] = stoi(qtd);    
        }
    }
    arquivo_entrada.close();    
}

void Estabelecimento::listar()
{
    system("clear");
    std::cout << "::::::::::::PRODUTOS DISPONIVEIS:::::::::::: " << std::endl << std::endl;
    for(auto& p : produtos)
    {
        int qtd = estoque[p.getCodigo()];
        if(qtd > 0)
        {
            std::cout << std::fixed;
            std::cout << std::setprecision(2);
        
            std::cout << "- cod: " << p.getCodigo() << " | " << p.getNome() 
            << " - R$ " << p.getPreco() << "/" << unidade_to_string(p.getUnidade()) << " | qtd: " << qtd << std::endl;  
        }
        
    }
}

bool Estabelecimento::em_estoque(std::string codigo, int quantidade)
{
    return estoque[codigo] >= quantidade;  
}

Produto* Estabelecimento::busca(std::string codigo)
{
    for(auto& c : produtos)
    {
        if (codigo == c.getCodigo())
        {
            return &c;
        }
    }
    return nullptr;
}

void Estabelecimento::caixa()
{
    std::ofstream arquivo_caixa("caixa.csv");

    double total_vendas = 0;
    arquivo_caixa << ":::::::PRODUTOS VENDIDOS::::::: " << std::endl << std::endl;
    for (auto& v : produtos)
    {
        total_vendas += v.getPreco()*vendas[v.getCodigo()];
        if(vendas[v.getCodigo()] > 0)
        {
            arquivo_caixa << "cod: " << v.getCodigo() << " | prod: " << v.getNome() 
            << " | preco: " << v.getPreco() << "/" << unidade_to_string(v.getUnidade())
            << " | qtd: " << vendas[v.getCodigo()] << " | total: R$ " 
            << (vendas[v.getCodigo()])*(v.getPreco()) << std::endl;
        }
    }
    arquivo_caixa << std::endl << "Faturamento total: R$ " << total_vendas << std::endl;
}

void Estabelecimento::venda(std::string codigo, int quantidade)
{
    estoque[codigo] -= quantidade;
    vendas[codigo] += quantidade;
}