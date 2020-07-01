#include "App.h"
#include "Diary.h"
#include <iostream>
#include <string>
#include <fstream>

App::App(const std::string& filename) : diary(filename)
{
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
           list_messages();
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
            std::cout << m->to_string() << std::endl;
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
    diary.print();
}

int App::show_usage(const std::string& prog_name)
{
    std::cout << "Uso: " << std::endl;
    std::cout << prog_name << " add <mensagem>" << std::endl;
    std::cout << prog_name << " list" << std::endl;
    std::cout << prog_name << " search <mensagem>" << std::endl;
    
    return 1;
}


