#ifndef FILA_HPP
#define FILA_HPP

template<class T>
class Fila {
    private:
    T* clientes;
    int tamanho;
    int primeiro;
    int ultimo;
    int cont;

    public:
    Fila(int tamanho);

    void adiciona(T item);
    T remove();
    T proximo();
    int contagem();
    bool isEmpty();
    bool isFull();

};
#endif
