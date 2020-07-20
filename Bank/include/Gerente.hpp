#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"
#include <string>

class Gerente : public Funcionario {
    private:
        std::string chave_acesso;
    
    public:
        Gerente();

        void setChaveAcesso(std::string chave_acesso);
        std::string getChaveAcesso();
};
#endif