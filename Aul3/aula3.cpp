#include <iostream>
#include <string>
#include <fstream>

void show_usage (const std::string &prog_name){
    std::cout << "Uso: " << prog_name << " add <mensagem>" << std::endl;
}


int main(int argc, char const *argv[]){
   
   std::string cmd;   
   std::ofstream arquivo_saida("arquivo.txt", std::ios::app);
   


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

           std::cout << mensagem << std::endl;
           arquivo_saida << mensagem << std:: endl;
       }   
   }   

  arquivo_saida.close();

  return 0;
}