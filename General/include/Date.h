#ifndef DATE_H
#define DATE_H

#include <string>

struct DateTime {
    std::string date;
    std::string time;

    DateTime();
    bool equals(DateTime datetime);
};
#endif