#ifndef CONTA_H
#define CONTA_H

#include <string>
#include <iostream>
#include <cstdlib>
#include "Agencia.h"
#include "Cliente.h"

class Acc {
    public:
        Client client;
        Branch branch;
        float balance;

        Acc();
        Acc(const std::string& name);

        void withdraw(float amount);
        void deposit(float amount);
        void transfer(float amount, Acc& account);
};
#endif