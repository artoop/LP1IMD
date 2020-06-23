#ifndef MESSAGE_H
#define MESSAGE_H

#include "Date.h"

struct Message {
    DateTime datetime;
    std::string content;
   
    bool equals(Message message);
    Message(const std::string& message);
};
#endif