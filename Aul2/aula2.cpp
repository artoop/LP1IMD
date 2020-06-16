#include <iostream>
#include <string.h>

int main(int argc, char const *argv[]){
   
   std::string mensagem;
   std::string cmd;

   if(argc == 1)
   {
     std::cout << "Uso: " << argv[0] << " add <mensagem>" << std::endl;
     return -1;   
   }

   else if(argc > 1)
   {
       cmd = argv[1];
       if(cmd == "add")
       {
            if(argc == 2)
           {
                std::cout << "Informe sua mensagem: " << std::endl;
                getline(std::cin, mensagem);
                std::cout << mensagem << std::endl;
           }
           else
           {
               std::cout << argv[2] << std::endl;
           }
       }   
   }   
  return 0;
}