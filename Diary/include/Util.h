#ifndef UTIL_H
#define UTIL_H
#include <ctime>
#include <string>
#include <sstream>

struct Util
{
    std::string format_current_date(const std::string& format);
    std::string get_current_date(); 
    std::string get_current_time();
};

#endif