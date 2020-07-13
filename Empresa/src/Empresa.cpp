#include "Empresa.hpp"
#include <string>
#include <iostream>

Empresa::Empresa()
{

}

Empresa::Empresa(std::string nome, std::string cnpj)
{
    this->nome=nome;
    this->cnpj=cnpj;
}

void Empresa::setNome(std::string nome)
{
    this->nome=nome;
}

void Empresa::setCnpj(std::string cnpj)
{
    this->cnpj=cnpj;
}
        
        
std::string Empresa::getNome()
{
    return nome;
}

std::string Empresa::getCnpj()
{
    return cnpj;
}

Funcionario Empresa::getFuncionario(int index)
{
    return funcionarios.at(index);
}

void Empresa::adicionarFuncionario(Funcionario funcionario)
{
    funcionarios.push_back(funcionario);
}

void Empresa::aumento(std::string dpt)
{
    for(auto& f : funcionarios)
    {
        if(dpt == f.getDepartamento())
        {
            f.setSalario(f.getSalario()*1.1);
        }
    }
}

void Empresa::imprimeFuncionarios()
{
    for(auto& f : funcionarios)
    {
        std::cout << "nome: " << f.getNome() << std::endl 
        << "salario: " << f.getSalario() << std::endl 
        << "departamento: " << f.getDepartamento() << std::endl 
        << "data de admissao: " << f.getDataAdmissao().dataToString() << std::endl 
        << "-----------------------------" << std::endl << std::endl;
    }
}