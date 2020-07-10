#include <ctime>
#include <string>
#include <sstream>
#include "Util.h"

std::string Util::format_current_date(const std::string& format)
{
    std::time_t time = std::time(nullptr);
    char result[1024];
    std::strftime(result, sizeof(result), format.c_str(), std::localtime(&time));
    return std::string(result);
}

std::string Util::get_current_date()
{
    return format_current_date("%d/%m/%Y");
}

std::string Util::get_current_time()
{
    return format_current_date("%H:%M:%S");
}