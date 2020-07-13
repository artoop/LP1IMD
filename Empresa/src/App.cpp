#include "/home/arturprocopio/Projetos/LP1/Empresa/include/App.hpp"

void App::criaEmpresa()
{
    std::string nome;
    std::string cnpj;

    std::cout << "Informe o nome da empresa: " << std::endl;
    std::cin >> nome;
    std::cout << std::endl << std::endl << "Informe o CNPJ: " << std::endl;
    std::cin >> cnpj;

    empresa = Empresa(nome, cnpj);
}

Funcionario App::criaFuncionario()
{
    std::string nome;
    double salario;
    std::string data_admissao;
    std::string departamento;

    system("clear");
    std::cout << "NOVO FUNCIONARIO" << std::endl << std::endl << std::endl;
    std::cout << "Nome: " << std::endl;
    std::cin >> nome;
    std::cout << std::endl << std::endl << "Salario: " << std::endl;
    std::cin >> salario;
    std::cout << std::endl << std::endl << "Data de admissao (dd/mm/aa): " << std::endl;
    std::cin >> data_admissao;
    std::cout << std::endl << std::endl << "Departamento: " << std::endl;
    std::cin >> departamento;
    std::cout << std::endl << std::endl;

    return Funcionario(nome, salario, data_admissao, departamento);
}

void App::adicionarFuncionarios(unsigned int quantidade)
{
    for(int i=0; i<quantidade; i++)
    {
        empresa.adicionarFuncionario(criaFuncionario());    
    }
    
}

void App::aumentoSalario()
{
    std::string dpt;
    std::cout << "Sobre qual departamento desjea aplicar o aumento de 10% do salario?" << std::endl;
    std::cin >> dpt;
    empresa.aumento(dpt);
    std::cout << std::endl;
}


void App::imprimeInfo()
{
    //system("clear");
    std::cout << "nome da empresa: " << empresa.getNome() << std::endl << "CNPJ: " << empresa.getCnpj() << std::endl << std::endl;
    std::cout << "-----------------------------" << std::endl << "funcionarios: " << std::endl << std::endl;
    empresa.imprimeFuncionarios();
}

int App::run()
{
    system("clear");
    criaEmpresa();
    
    int quantidade;
    std::cout << "Informe quantos funcionarios deseja adicionar: " << std::endl << std::endl;
    std::cin >> quantidade;


    adicionarFuncionarios(quantidade);

    imprimeInfo();

    aumentoSalario();

    imprimeInfo();
    return 0;
}
