#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

class Cliente {
    private:
        std::string nome;

    public:
        Cliente();
        Cliente(std::string nome);

        void setNome(std::string nome);
        std::string getNome();
};

#endif