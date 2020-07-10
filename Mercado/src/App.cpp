#include "App.hpp"
#include <iostream>
#include <iomanip>

App::App(std::string nome_arquivo) 
{
    estabelecimento = Estabelecimento(nome_arquivo);
}

App::~App()
{
    
}

void App::iniciar_sessao()
{
    system("clear");
    int opcao = -1;
    double saldo_inicial = 0;
    std::cout << "Informe o saldo inicial:" << std::endl <<"R$ ";
    std::cin >> saldo_inicial;
    std::cout << std::endl;

    cliente.push_back(Cliente(saldo_inicial));
    while(opcao != 0)
    {
        system("clear");
        imprime_menu();
        std::cout << "Informe a operacao desejada: ";
        std::cin >> opcao;
        std::cout << std::endl << std::endl;
        switch(opcao)
        {
            case 1: compra(); break;
            case 2: cliente.back().verSacola(); break;
            case 3: adiciona_saldo(); break;
            case 0: encerrar_compra(); break;
            default: std::cout << "Opcao invalida!" << std::endl; break;
        }
    }

}

void App::imprime_menu()
{
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "...::::::::::::::::::MERCADO DIGITAL::::::::::::::::::..." << std::endl
    << "Cliente # " << cliente.size() << std::endl 
    << "Saldo atual: R$ " << cliente.back().getSaldo() << std::endl << std::endl
    << "1) Comprar" << std::endl
    << "2) Ver sacola" << std::endl
    << "3) Adicionar saldo" << std::endl << std::endl 
    << "0) Encerrar sessao" << std::endl;
}

void App::adiciona_saldo()
{
    system("clear");
    double saldo_atual = cliente.back().getSaldo();
    double saldo_adicionado;
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "::::::::SALDO ATUAL: R$ " << saldo_atual << "::::::::" << std::endl << std::endl
    << "Informe a quantidade de saldo a ser adicionada: R$ ";
    std::cin >> saldo_adicionado;
    cliente.back().setSaldo(saldo_atual+saldo_adicionado);
    std::cout << std::endl << "Valor adicionado com sucesso! Aperte ENTER para continuar" << std::endl;
    std::getchar();
    std::getchar();
}

void App::compra()
{
    std::string codigo_compra;
    int quantidade_compra;
    Produto* produto_compra;

     estabelecimento.listar();
        
        
    std::cout << std::endl << "Digite o codigo do item que deseja comprar: ";
    std::cin >> codigo_compra;
    std::cout << std::endl << "Informe a quantidade que deseja: ";
    std::cin >> quantidade_compra;
    std::cout << std::endl;
  
    if(estabelecimento.em_estoque(codigo_compra,quantidade_compra))
    {
        produto_compra = estabelecimento.busca(codigo_compra);
        if(produto_compra != nullptr)
        {
            if(cliente.back().tem_saldo(produto_compra->getPreco()*quantidade_compra))
            {
                estabelecimento.venda(codigo_compra, quantidade_compra);
                cliente.back().compra(*produto_compra, quantidade_compra);
                std::cout << "Compra realizada com sucesso." << std::endl 
                << ".........................................." 
                << std::endl << "Aperte ENTER para continuar" << std::endl;
                std::getchar();
                std::getchar();
            }
            else
            {
                std::cout << "Saldo insuficiente!" << std::endl;
                std::cout << ".........................................."
                << std::endl << "Aperte ENTER para continuar" << std::endl;
                std::getchar();
                std::getchar();
            }
        } 
    }
    else
    {
        std::cout << "Estoque insuficiente!" << std::endl;
        std::cout << ".........................................."
        << std::endl << "Aperte ENTER para continuar" << std::endl;
        std::getchar();
        std::getchar();
    }
    
}

void App::encerrar_compra()
{
    std::string arquivo = "cliente_" + std::to_string(cliente.size()) + ".txt";
    cliente.back().registro(arquivo);
}

int App::run()
{
    iniciar_sessao();
    int opcao = -1;
    while(opcao != 0)
    {
       std::cout << "Deseja iniciar nova sessao?" << std::endl 
       << "1 para confirmar" << std::endl << "0 para sair" << std::endl;
       std::cin >> opcao;
       switch(opcao)
       {
            case 1: iniciar_sessao();
            case 0: break;
            default: std::cout << "Opcao invalida!" << std::endl; break;
       } 
    }
    
    estabelecimento.caixa();
    return 0;
}



