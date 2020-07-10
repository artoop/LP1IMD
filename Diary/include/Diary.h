#ifndef DIARY_USE_H
#define DIARY_USE_H

#include <vector>
#include <Message.h>

struct Diary 
{
    Diary(const std::string& filename);

    std::string file_name;
    std::vector<Message> messages;

    void read_from_file();
    void add(const std::string& message);
    std::vector<Message> list();
//    void reallocate_messages();
    std::vector<Message*> search(const std::string key);
};
#endif