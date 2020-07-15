#ifndef AGENCIA_HPP
#define AGENCIA_HPP

#include <string>

class Agencia {

    private:
        std::string nome;
        std::string id;

    public:
        Agencia();
        Agencia(std::string nome);

        void setNome(std::string nome);
        std::string getNome();

        void setId(std::string id);
        std::string getId();
};
#endif