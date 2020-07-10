#include "App.h"
#include "Diary.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <fstream>

App::App(std::unordered_map<std::string,std::string> config_map) 
: diary(config_map["path"]), default_msg_format(config_map["default_format"])
{
}

void App::print_interactive_menu()
{
    std::cout << "........................" << std::endl;
    std::cout << "Diario 1.0" << std::endl << std::endl << "Selecione uma ação:" << std::endl;
    std::cout << "1) Listar mensagens" << std::endl << "2) Adicionar mensagem" << std:: endl 
    << "3) Pesquisar" << std::endl << std::endl << "0) Finalizar" << std::endl;
}

void App::interactive_mode()
{
    int option = -1;
    while(option != 0)
    {
        print_interactive_menu();
        std::cin >> option;
        std::cin.ignore();
        std::cout << std::endl << std::endl;
        switch(option)
        {
            case 1: list_messages(); break;
            case 2: add(); break;
            case 3: search(); break;
            case 0: break;
            default: std::cout << "Opção inválida." << std::endl; break;
        }
    }    
}

int App::run(int argc, char* argv[])
{
    if(argc == 1)
   {
    return show_usage(argv[0]);
   }

   else if(argc > 1)
   {
       std::string cmd = argv[1];
       
       if(cmd == "add")
       {
            if(argc == 2)
           {
                add();
           }
           else
           {
              add(argv[2]);
           }
       }
       else if(cmd == "list")
       {
           if(argc == 2)
           {
               list_messages();
           }
           else
           {
                list_messages(argv[2]);   
           }
       }
       else if(cmd == "search")
       {
           if(argc == 2)
           {
               search();
           }
           else
           {
               search(argv[2]);
           }
           
       }
       else if(cmd == "interactive")
       {
           interactive_mode();
       } 
       else return show_usage(argv[0]);
   }

   return 0;
}

void App::search()
{
    std::string key;
    std::cout << "Informe o(s) termo(s) que quer buscar:  " << std::endl;
    std::getline(std::cin, key);

    search(key);
}

void App::search(std::string key)
{
    std::vector<Message*> found = diary.search(key);
    if(!found.empty())
    {
        for(auto m : found)
            std::cout << m->to_string(default_msg_format) << std::endl;
    }
    else
    {
        std::cout << "Termo nao encontrado." << std::endl;    
    }
    
}

void App::add()
{
    std::string message;
    std::cout << "Informe sua mensagem: " << std::endl;
    std::getline(std::cin, message);

    add(message);
}

void App::add(const std::string message)
{
    diary.add(message);
}

void App::list_messages()
{
    list_messages(default_msg_format);
}

void App::list_messages(std::string format)
{
    std::vector<Message> messages = diary.list();
    for(Message m : messages)
    {
        std::cout << m.to_string(format) << std::endl;
    }
}



int App::show_usage(const std::string& prog_name)
{
    std::cout << "Uso: " << std::endl;
    std::cout << prog_name << " add <mensagem>" << std::endl;
    std::cout << prog_name << " list" << std::endl;
    std::cout << prog_name << " list <format>" << std::endl;
    std::cout << prog_name << " search <mensagem>" << std::endl;
    std::cout << prog_name << " interactive" << std::endl;

    
    return 1;
}


