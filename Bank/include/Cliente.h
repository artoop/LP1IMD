#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Client {
    private:
        std::string name;
        std::string cpf;

    public:
        Client();
        Client(std::string name);

        void setName(std::string name);
        std::string getName();
        void setCpf(std::string cpf);
        std::string getCpf();


};
#endif