#ifndef APP_H
#define APP_H

#include <unordered_map>
#include "Diary.h"
#include <string>

struct App {
    Diary diary;
    std::string default_msg_format;


    App(std::unordered_map<std::string,std::string> config_map);
    int run(int argc, char* argv[]);

    int show_usage(const std::string& prog_name);
    void add();
    void add(const std::string message);
    void list_messages();
    void list_messages(std::string format);
    void search(std::string key);
    void search();
    void interactive_mode();
    void print_interactive_menu();
};
#endif