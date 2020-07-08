#ifndef BANCO_H
#define BANCO_H

#include <vector>
#include "Conta.h"

class Bank {
    public:
        Bank();

        std::vector<Acc> accounts;

        void add(std::string name, std::string branch);
        int acc_qty();
};
#endif