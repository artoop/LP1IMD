#ifndef MESSAGE_H
#define MESSAGE_H

#include "Date.h"

struct Message {
    Date date;

    void save_message(std::string file_name, std::string mensagem);
    void list(std::string file_name);
};

#endif