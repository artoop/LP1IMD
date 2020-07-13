#include "Funcionario.hpp"

Funcionario::Funcionario()
{

}

Funcionario::Funcionario(std::string nome, double salario, std::string data_admissao, std::string departamento)
{
    this->nome=nome;
    this->salario=salario;
    this->data_admissao=Data(data_admissao);
    this->departamento=departamento;
}

void Funcionario::setNome(std::string nome)
{
    this->nome=nome;
}

void Funcionario::setSalario(double salario)
{
    this->salario=salario;
}

void Funcionario::setDataAdmissao(std::string data_admissao)
{
    this->data_admissao=data_admissao;
}

void Funcionario::setDepartamento(std::string departamento)
{
    this->departamento=departamento;
}


std::string Funcionario::getNome()
{
    return nome;
}

double Funcionario::getSalario()
{
    return salario;
}

Data Funcionario::getDataAdmissao()
{
    return data_admissao;
}

std::string Funcionario::getDepartamento()
{
    return departamento;
}