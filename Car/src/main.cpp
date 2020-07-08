#include <iostream>
#include "carro.hpp"
#include "lista.hpp"

using namespace std;

int main(){
    Lista carros;
        
    Carro c;
    c.tipo = "Sedan";
    c.numPortas = 4;
    c.placa = "XYZ-0102";

    carros.adicionar(c);

    cout << "Tipo do carro: " << c.tipo << endl;
    cout << "Quantidade de portas: " << c.numPortas << endl;
    cout << "Placa do carro: " << c.placa << endl;
    cout << "A cor do carro é: " << c.cor << endl;
    c.ligaCarro();
    c.acelera(50);
    cout << "A velocidade atual é: " << c.velocidade << "KM/H" << endl;
    c.freia (20);
    cout << "A velocidade atual é: " << c.velocidade << "KM/H" << endl;
    cout << "----------------" << endl << "Quantidade de carros cadastrados: " << carros.qtd_carros() << endl;

    return 0;
}
