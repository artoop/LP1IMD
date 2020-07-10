#ifndef APP_HPP
#define APP_HPP

#include "Estabelecimento.hpp"
#include "Cliente.hpp"

class App {
    private:
        Estabelecimento estabelecimento;
        std::vector<Cliente>cliente;

    public:
        App(std::string nome_arquivo);
        ~App();
        int run();
        void compra();
        void iniciar_sessao();
        void imprime_menu();
        void adiciona_saldo();
        void encerrar_compra();
};
#endif
