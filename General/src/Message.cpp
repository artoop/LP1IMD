#include "Date.h"
#include "Time.h"
#include "Message.h"
#include "Util.h"
#include <string>
#include <iostream>
#include <sstream>

Message::Message(const std::string& message_content, const std::string& str_date, const std::string& str_time)
{
    date = Date(str_date);
    time = Time(str_time);
    content = message_content;
}

Message::Message(const std::string& message_content)
{
    Util util;
    date = Date(util.get_current_date());
    time = Time(util.get_current_time());
    content = message_content;
}

Message::Message()
{
}

std::string Message::to_string()
{
    return date.to_string() + " " + time.to_string() + " : " + content;
}

std::string Message::to_string(std::string format)
{
    int begin = 0;
    size_t index = format.find("%", begin);
    char code;

    while(index != std::string::npos && index < format.length()-1)
    {
        code = format.at(index+1);
        switch(code)
        {
            case 'd': format.replace(index, 2, date.to_string()); break;
            case 't': format.replace(index, 2, time.to_string()); break;
            case 'm': format.replace(index, 2, content); break;
        }
        begin = index+1;
        index = format.find("%", begin);
    }
    return format;
}

bool Message::equals(Message message)
{
    if(message.content == content && date.equals(message.date) && time.equals(message.time))
    {
        return true;
    }
    else return false;
}