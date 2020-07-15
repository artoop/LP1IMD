#include "Fila.hpp"
#include <iostream>

template<class T>
Fila<T>::Fila(int tamanho)
{
    this->tamanho=tamanho;
    clientes = new T[tamanho];
    primeiro = -1;
    ultimo = 0;
    cont = 0;
}

template<class T>
bool Fila<T>::isEmpty()
{
    if(primeiro == -1) return true;
    else return false;
}

template<class T>
bool Fila<T>::isFull()
{
    if(primeiro == ultimo) return true;
    else return false;
}


template<class T>
void Fila<T>::adiciona(T item)
{
    if(isFull())
    {
        std::cout << "Fila cheia. Operacao nao realizada." << std::endl;
    }
    else
    {
        if(isEmpty())
        {
            primeiro = 0;
        }
        clientes[ultimo] = item;
        ultimo = (ultimo+1)%tamanho;
        cont++;
    }   
}

template<class T>
T Fila<T>::remove()
{
    if(isEmpty())
	{
		std::cout << "Fila vazia. Operacao nao realizada" << std::endl;
		return NULL;
	}
	else
	{
	    T rem = clientes[primeiro];
	    primeiro = (primeiro+1)%tamanho;
		
	    if (primeiro == ultimo)
	    {
	    	primeiro = -1;
	    	ultimo = 0;
    	}
        cont--;
	    return rem;
	}
}

template<class T>
T Fila<T>::proximo()
{
    if(!isEmpty())return clientes[primeiro];
    else return NULL;
}

template<class T>
int Fila<T>::contagem()
{
    return cont;
}