#ifndef CAIXA_HPP
#define CAIXA_HPP

#include "Funcionario.hpp"

class Caixa : public Funcionario {
    private:
        double quebra_caixa;
    
    public:
        Caixa();

        void setQuebraCaixa(double quebra_caixa);
        double getQuebraCaixa();
};
#endif