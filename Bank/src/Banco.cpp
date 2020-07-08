#include "Banco.h"
#include <vector>
#include <iostream>

Bank::Bank()
{

}

void Bank::add(std::string name, std::string branch)
{
    Acc account(name, branch);
    accounts.push_back(account);
}

int Bank::acc_qty()
{
    return accounts.size();
}