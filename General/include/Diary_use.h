#ifndef DIARY_USE_H
#define DIARY_USE_H

#include <Message.h>



struct Diary {
    std::string file_name;
    Message messages[];

    void save_message(std::string message);
    void list();
};

#endif;