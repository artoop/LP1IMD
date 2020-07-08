#include "App.h"
#include "Banco.h"
#include <iostream>
#include <string>

App::App()
{
    bank = Bank();
}

void App::add()
{
    std::string name;
    std::string branch;
    std::cout << "Informe o nome do cliente: " << std::endl;
    std::getline(std::cin, name);
    std::cout << std::endl << "Informe o nome da agencia: " << std::endl;
    std::getline(std::cin, branch);

    add(name, branch);
}

void App::add(std::string name, std::string branch)
{
    bank.add(name, branch);
}

void App::show_qty()
{
    std::cout << "Contas cadastradas: " << bank.acc_qty() << std::endl;
}


void App::print_menu()
{
    std::cout << "........................" << std::endl;
    std::cout << "Banco database" << std::endl << std::endl << "Selecione uma ação:" << std::endl;
    std::cout << "1) Adicionar conta" << std::endl << "2) Ver quantidade de contas" << std:: endl 
     << std::endl << std::endl << "0) Finalizar" << std::endl;
}

int App::run()
{
    int option = -1;
    while(option != 0)
    {
        print_menu();
        std::cin >> option;
        std::cin.ignore();
        std::cout << std::endl << std::endl;
        switch(option)
        {
            case 1: add(); break;
            case 2: show_qty(); break;
            case 0: break;
            default: std::cout << "Opção inválida." << std::endl; break;
        }
    }
    return option;   
}