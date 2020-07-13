#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>
#include "Data.hpp"

class Funcionario {
    private:
        std::string nome;
        double salario;
        Data data_admissao;
        std::string departamento;
    
    public:
        Funcionario();
        Funcionario(std::string nome, double salario, std::string data_admissao, std::string departamento);

        void setNome(std::string nome);
        void setSalario(double salario);
        void setDataAdmissao(std::string data_admissao);
        void setDepartamento(std::string departamento);

        std::string getNome();
        double getSalario();
        Data getDataAdmissao();
        std::string getDepartamento();


};
#endif