#include <string>
#include <ctime>
#include <sstream>
#include <iostream>
#include "Time.h"

Time::Time(const std::string str_time)
{
    std::stringstream stream(str_time);
    char discard;

    stream >> hour;
    stream >> discard;
    stream >> minute;
    stream >> discard;
    stream >> second;
}

bool Time::equals(Time time)
{
    if (time.hour == hour && time.minute == minute && time.second == second)
    {
        return true;
    }
    else return false;
}

Time::Time(){}

std::string Time::to_string()
{
    std::string str = "";
    if(hour < 10)
    {
       str += "0";
    }
    str += std::to_string(hour) + ":";
    if(minute < 10)
    {
        str+= "0";
    }
    str += std::to_string(minute) + ":";
    if(second < 10)
    {
        str += "0";
    }
    str += std::to_string(second);
    return str;
}
