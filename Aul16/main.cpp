#include "Conta.h"
#include <iostream>

int main(){

   Acc conta_1 = Acc("Artur Braga");
   Acc conta_2 = Acc("Pedro Braga");

   conta_1.deposit(500);
   conta_2.deposit(350);

   conta_1.withdraw(250);
   conta_2.transfer(50, conta_1);

   std::cout << "conta 1: " << std::endl << "ID: " << conta_1.id << std::endl;
   std::cout << "NOME: " << conta_1.name << std::endl << "SALDO: " << conta_1.balance << std::endl << std::endl;

   std::cout << "conta 2: " << std::endl << "ID: " << conta_2.id << std::endl;
   std::cout << "NOME: " << conta_2.name << std::endl << "SALDO: " << conta_2.balance << std::endl << std::endl;

   return 0;    
}