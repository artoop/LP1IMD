#include <string>
#include <ctime>
#include <sstream>
#include <iostream>
#include "Date.h"

Date::Date(const std::string str_date)
{
    std::stringstream stream(str_date);
    char discard;

    stream >> day;
    stream >> discard;
    stream >> month;
    stream >> discard;
    stream >> year;
}

bool Date::equals(Date date)
{
    if(date.day == day && date.month == month && date.year == year)
    {
        return true;
    }
    else return false;
}

Date::Date(){}

std::string Date::to_string()
{
    std::string str = "";
    if(day < 10)
    {
       str += "0";
    }
    str += std::to_string(day) + "/";
    if(month < 10)
    {
        str+= "0";
    }
    str += std::to_string(month) + "/" + std::to_string(year);
    return str;
}
