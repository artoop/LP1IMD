#ifndef DATE_H
#define DATE_H

#include <string>

struct Date {
   Date();
   unsigned int year;
   unsigned int month;
   unsigned int day;

    Date(const std::string date);
    bool equals(Date date);
    std::string to_string();
};
#endif