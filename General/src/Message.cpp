#include "Date.h"
#include "Time.h"
#include "Message.h"
#include "Util.h"
#include <string>
#include <iostream>

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

bool Message::equals(Message message)
{
    if(message.content == content && date.equals(message.date) && time.equals(message.time))
    {
        return true;
    }
    else return false;
}