#include <iostream>
#include "Conta.h"
#include "Agencia.h"
#include "Cliente.h"

Acc::Acc()
{
    
}

Acc::Acc(const std::string& name, const std::string& branch_name)
{
    client = Client(name);
    branch = Branch(branch_name);
    balance = 0;

}

void Acc::withdraw(float amount)
{
    balance -= amount;
}

void Acc::deposit(float amount)
{
    balance += amount;
}

void Acc::transfer(float amount, Acc& account)
{
    balance -= amount;
    account.balance += amount;
}