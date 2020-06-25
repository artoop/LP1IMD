#include "Date.h"
#include "Time.h"
#include "Message.h"
#include "Util.h"
#include <string>
#include <iostream>

Message::Message(const std::string& message)
{
    Util util;
    date = Date(util.get_current_date());
    time = Time(util.get_current_time());
    content = message;
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