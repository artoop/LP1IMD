#ifndef TIME_H
#define TIME_H

struct Time
{
    Time();
    unsigned int hour;
    unsigned int minute;
    unsigned int second;

    Time(const std::string str_time);
    bool equals(Time time);
    std::string to_string();
};

#endif