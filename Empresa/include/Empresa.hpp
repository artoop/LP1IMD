#ifndef EMPRESA_HPP
#define EMPRESA_HPP

#include "Funcionario.hpp"
#include <vector>

class Empresa {
    private:
        std::string nome;
        std::string cnpj;
        std::vector<Funcionario> funcionarios;
    public:
        Empresa();
        Empresa(std::string nome, std::string cnpj);

        void setNome(std::string nome);
        void setCnpj(std::string cnpj);
        void setFuncionario(Funcionario funcionario);

        std::string getNome();
        std::string getCnpj();
        Funcionario getFuncionario(int index);

        void adicionarFuncionario(Funcionario funcionario);
        void imprimeFuncionarios();
        void aumento(std::string dpt);

};
#endif