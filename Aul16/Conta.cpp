#include <iostream>
#include "Conta.h"

Acc::Acc(std::string name)
{
    id = rand() % 8999 + 1000;
    this->name = name;
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

