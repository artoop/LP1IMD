#include "Data.hpp"
#include <sstream>

Data::Data()
{

}

Data::Data(std::string str_data)
{
    std::stringstream stream(str_data);
    char discard;
    stream >> dia;
    stream >> discard;
    stream >> mes;
    stream >> discard;
    stream >> ano;
}

int Data::getDia()
{
    return dia;
}

int Data::getMes()
{
    return mes;
}

int Data::getAno()
{
    return ano;
}

void Data::setDia(int dia)
{
    this->dia=dia;
}

void Data::setMes(int mes)
{
    this->mes=mes;
}

void Data::setAno(int ano)
{
    this->ano=ano;
}
std::string Data::dataToString()
{
    std::string str = "";
    if(getDia() < 10)
    {
       str += "0";
    }
    str += std::to_string(getDia()) + "/";
    if(getMes() < 10)
    {
        str+= "0";
    }
    str += std::to_string(getMes()) + "/" + std::to_string(getAno());
    return str;
}