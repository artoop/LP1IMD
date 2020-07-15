#ifndef CLIENTEPJ_HPP
#define CLIENTEPJ_HPP

#include <string>

class ClientePJ {
    private:
        std::string razao_social;
        std::string cnpj;

    public:
        ClientePJ();
        ClientePJ(std::string razao_social);

        void setRazaoSocial(std::string razao_social);
        std::string getRazaoSocial();
        void setCnpj(std::string cnpj);
        std::string getCnpj();


};
#endif