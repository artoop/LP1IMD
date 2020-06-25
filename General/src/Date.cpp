#include <string>
#include <ctime>
#include <sstream>
#include <iostream>
#include "Date.h"

Date::Date(const std::string date)
{
    std::stringstream stream(date);
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
    std::string str = std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
    return str;
}