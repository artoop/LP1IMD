#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>
class Funcionario {
    private:
        std::string nome;
        std::string cargo;
        double salario;
    
    public:
        Funcionario();
        Funcionario(std::string nome, std::string cargo, double salario);

        void setNome(std::string nome);
        void setCargo(std::string cargo);
        void setSalario(double salario);

        std::string getNome();
        std::string getCargo();
        double getSalario();
};

#endif