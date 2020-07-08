#ifndef CARRO_HPP
#define CARRO_HPP
#include <string>
#include "motor.hpp"

using namespace std;

class Carro{
    public:
    string tipo;
    string placa;
    int numPortas;
    int velocidade;
    string cor;
    Motor motor;

    Carro(string tipo, string placa, int numPortas, int velocidade, string cor, Motor motor);
    Carro();

    void acelera(int velocidade);
    void freia(int velocidade);
    void ligaCarro();
};
#endif
