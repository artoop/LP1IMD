#ifndef MESSAGE_H
#define MESSAGE_H
#include "Date.h"
#include "Time.h"
#include "Util.h"

struct Message {
    Date date;
    Time time;
    std::string content;
   
    bool equals(Message message);
    Message(const std::string& message);
    Message();
};
#endif