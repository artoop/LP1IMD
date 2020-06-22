#include <iostream>
#include <string>
#include <fstream>
#include <ctime>



void show_usage (const std::string &prog_name){
    std::cout << "Uso: " << std::endl;
    std::cout << prog_name << " add <mensagem>" << std::endl;
    std::cout << prog_name << " list" << std::endl;
}

std::string format_current_date(const std::string& format)
{
    std::time_t time = std::time(nullptr);
    char result[1024];
    std::strftime(result, sizeof(result), format.c_str(), std::localtime(&time));
    return std::string(result);
}

std::string get_current_date()
{
    return format_current_date("%d/%m/%Y");
}

std::string get_current_time()
{
    return format_current_date("%H:%M:%S");
}

bool is_date_set(std::string file_name){
    std::ifstream arquivo_entrada(file_name);
    std::string linha;
    bool date_set = false;

    if(arquivo_entrada.fail())
    {
        std::cout << "Arquivo inexistente." << std::endl;
    }
    else
    {
        while(std::getline(arquivo_entrada, linha))
        {
            if(linha == "# " + get_current_date())
            {
                date_set = true;
            }
        }
    }
    
    arquivo_entrada.close();
    
    return date_set;
}

void save_message(std::string file_name, std::string mensagem){
    std::ofstream arquivo_saida("arquivo.txt", std::ios::app);
   
   if(!is_date_set(file_name))
   {
       arquivo_saida << std::endl << "# " << get_current_date() << std::endl << std::endl;
   }

    arquivo_saida << "- " << get_current_time() << " " << mensagem << std::endl;
    arquivo_saida.close(); 

}

void list(std::string file_name){
    std::ifstream arquivo_entrada(file_name);
    std::string linha;

    if(arquivo_entrada.fail())
    {
        std::cout << "Arquivo inexistente." << std::endl;
    }
    else
    {
        while(std::getline(arquivo_entrada, linha))
        {
            if(linha.substr(0, 1) == "-")
            {
                std::cout << linha.substr(11) << std::endl;
            }
        }
    }
    
}

int main(int argc, char const *argv[]){
   
   std::string file_name = "arquivo.txt";
   std::string cmd;   

   if(argc == 1)
   {
     show_usage(argv[0]);
     return -1;   
   }

   else if(argc > 1)
   {
       cmd = argv[1];
       if(cmd == "add")
       {
            std::string mensagem;

            if(argc == 2)
           {
                std::cout << "Informe sua mensagem: " << std::endl;
                std::getline(std::cin, mensagem);
           }
           else
           {
              mensagem = argv[2];
           }

           save_message(file_name, mensagem);
           std::cout << "Mensagem adicionada!" << std::endl;           
       }
       else if(cmd == "list")
       {
           list(file_name);
       }   
   }   


  return 0;
}