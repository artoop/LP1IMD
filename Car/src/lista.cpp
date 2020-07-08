#include "lista.hpp"
#include <vector>

Lista::Lista()
{
}

int Lista::qtd_carros()
{
    return carros.size();
}

void Lista::adicionar(Carro carro)
{
    carros.push_back(carro);
}