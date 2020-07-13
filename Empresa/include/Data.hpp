#ifndef DATA_HPP
#define DATA_HPP

#include <string>

class Data {
    private:
        unsigned int dia;
        unsigned int mes;
        unsigned int ano;
    public:
        Data();
        Data(std::string str_data);

        int getDia();
        int getMes();
        int getAno();

        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);

        std::string dataToString();
};
#endif