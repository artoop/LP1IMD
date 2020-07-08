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

    int qtd_carros;

    Carro(string tipo, string placa, int numPortas, int velocidade, string cor, Motor motor);
    Carro();

    void acelera(int velocidade);
    void freia(int velocidade);
    void ligaCarro();
    int cont_qtd_carros();
};
