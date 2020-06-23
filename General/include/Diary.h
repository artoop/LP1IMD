#ifndef DIARY_USE_H
#define DIARY_USE_H

#include <Message.h>

struct Diary 
{
    Diary(const std::string& filename);

    std::string file_name;
    Message* messages;
    size_t messages_size;
    size_t messages_capacity;

    void add(const std::string& message);
    void write();
};

#endif