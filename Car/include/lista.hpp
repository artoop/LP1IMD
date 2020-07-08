#ifndef LISTA_HPP
#define LISTA_HPP
#include "carro.hpp"
#include <vector>

class Lista {
    public:
        Lista();
        
        std::vector<Carro> carros;
        
        int qtd_carros();
        void adicionar(Carro carro);

};
#endif