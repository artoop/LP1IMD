#ifndef CLIENTEPF_HPP
#define CLIENTEPF_HPP

#include <string>
#include "Cliente.hpp"

class ClientePF : public Cliente {
    private:
        std::string cpf;

    public:
        ClientePF();
        
        void setCpf(std::string cpf);
        std::string getCpf();


};
#endif