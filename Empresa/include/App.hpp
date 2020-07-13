#ifndef APP_HPP
#define APP_HPP

#include "Empresa.hpp"
#include <iostream>

class App {
    private:
        Empresa empresa;
    public:        
        void criaEmpresa();
        int run();        
        Funcionario criaFuncionario();
        void adicionarFuncionarios(unsigned int quantidade);
        void aumentoSalario();
        void imprimeInfo();

};

#endif