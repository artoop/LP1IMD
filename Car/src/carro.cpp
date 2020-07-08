#include "carro.hpp"
#include <string>
#include <vector>

Carro::Carro(string tipo, string placa, int numPortas, int velocidade, string cor, Motor motor){
    this->tipo = tipo;
    this->placa = placa;
    this->numPortas = numPortas;
    this->velocidade = velocidade;
    this->cor = cor;
    this->motor = motor;
}



Carro::Carro(){
    this->cor = "Branco";
}

void Carro::acelera(int velocidade){
    this->velocidade += velocidade;
}

void Carro::freia(int velocidade){
    this->velocidade -= velocidade;
}

void Carro::ligaCarro(){
    motor.partida();
}