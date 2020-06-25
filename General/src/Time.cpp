#include <string>
#include <ctime>
#include <sstream>
#include <iostream>
#include "Time.h"

Time::Time(const std::string time)
{
    std::stringstream stream(time);
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
    std::string str = std::to_string(hour) + ":" + std::to_string(minute) + ":" + std::to_string(second);
    return str;
}