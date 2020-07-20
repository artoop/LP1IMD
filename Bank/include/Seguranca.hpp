#ifndef SEGURANCA_HPP
#define SEGURANCA_HPP

#include "Funcionario.hpp"

class Seguranca : public Funcionario {
    private: 
        std::string chave;

    public:
        Seguranca();

        void setChave(std::string chave);
        std::string getChave();
};
#endif