#ifndef APP_HPP
#define APP_HPP

#include "Banco.hpp"
#include <string>

class App {
    
    public:
        Banco banco;

        App();
        
        int run();
        void add();
        void add(std::string nome, std::string agencia);
        void show_qty();
        void print_menu();
};
#endif