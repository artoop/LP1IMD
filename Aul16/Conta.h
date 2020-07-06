#ifndef CONTA_H
#define CONTA_H

#include <string>
#include <iostream>
#include <cstdlib>

class Acc {
    public:
        unsigned int id;
        std::string name;
        float balance;

        Acc(std::string name);

        void withdraw(float amount);
        void deposit(float amount);
        void transfer(float amount, Acc& account);
};
#endif