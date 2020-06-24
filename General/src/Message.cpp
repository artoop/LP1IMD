#include "Date.h"
#include "Message.h"
#include <string>
#include <iostream>

Message::Message(const std::string& message)
{
    content = message;
}

Message::Message()
{
    
}

bool Message::equals(Message message)
{
    if(message.content == content && datetime.equals(message.datetime))
    {
        return true;
    }
    else return false;
}