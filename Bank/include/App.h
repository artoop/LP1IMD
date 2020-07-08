#ifndef APP_H
#define APP_H

#include "Banco.h"
#include <string>

class App {
    
    public:
        Bank bank;

        App();
        
        int run();
        void add();
        void add(std::string name, std::string branch);
        void show_qty();
        void print_menu();
};
#endif