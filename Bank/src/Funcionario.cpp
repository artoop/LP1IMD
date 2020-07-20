#include "Funcionario.hpp"

Funcionario::Funcionario()
{

}

Funcionario::Funcionario(std::string nome, std::string cargo, double salario)
{
    this->nome = nome;
    this->cargo = cargo;
    this->salario = salario;
}

void Funcionario::setNome(std::string nome)
{
    this->nome = nome;
}

void Funcionario::setCargo(std::string cargo)
{
    this->cargo = cargo;
}

void Funcionario::setSalario(double salario)
{
    this->salario = salario;
}

std::string Funcionario::getNome()
{
    return nome;
}
std::string Funcionario::getCargo()
{
    return cargo;
}

double Funcionario::getSalario()
{
    return salario;
}