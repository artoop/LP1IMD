#include "Conta.h"
#include <iostream>

int main(){
   Acc conta_1 = Acc("Artur Braga");
   Acc conta_2 = Acc("Pedro Braga");

   conta_1.deposit(500);
   conta_2.deposit(350);

   conta_1.withdraw(250);
   conta_2.transfer(50, conta_1);

   std::cout << "conta 1: " << std::endl << "CPF: " << conta_1.client.getCpf() << std::endl;
   std::cout << "NOME: " << conta_1.client.getName() << std::endl << "AGENCIA: " << conta_1.branch.getName() << std::endl;
   std::cout << "ID AG: " << conta_1.branch.getId() << std::endl << "SALDO: " << conta_1.balance << std::endl << std::endl;

   std::cout << "conta 2: " << std::endl << "CPF: " << conta_2.client.getCpf() << std::endl;
   std::cout << "NOME: " << conta_2.client.getName() << std::endl << "AGENCIA: " << conta_2.branch.getName() << std::endl;
   std::cout << "ID AG: " << conta_2.branch.getId() << std::endl << "SALDO: " << conta_2.balance << std::endl << std::endl;

   return 0;    
}