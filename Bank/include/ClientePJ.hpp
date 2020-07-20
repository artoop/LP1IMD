#ifndef CLIENTEPJ_HPP
#define CLIENTEPJ_HPP

#include "Cliente.hpp"
#include <string>

class ClientePJ : public Cliente {
    private:
        std::string cnpj;

    public:
        ClientePJ();

        void setCnpj(std::string cnpj);
        std::string getCnpj();


};
#endif