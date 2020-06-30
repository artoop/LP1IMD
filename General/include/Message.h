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
    Message(const std::string& message_content, const std::string& str_date, const std::string& str_time);
    Message(const std::string& message_content);
    Message();
    Message* search(const std::string message);
    std::string to_string();

};
#endif
