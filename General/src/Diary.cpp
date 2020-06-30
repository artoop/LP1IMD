#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
#include "Diary.h"

Diary::Diary(const std::string& filename)
{
    file_name = filename;
    messages_capacity = 10;
    messages_size = 0;

    messages = new Message[messages_capacity];
    read_from_file();
}

void Diary::reallocate_messages()
{
    messages_capacity *= 2;
    Message* new_array = new Message[messages_capacity];

    for(size_t i=0; i<messages_capacity/2; i++)
    {
        new_array[i] = messages[i];
    }

    delete [] messages;
    messages = new_array;
}

void Diary::read_from_file()
{
    std::ifstream input_file(file_name);
    std::string linha;
    std::string current_date;
    std::string current_content;
    std::string current_time;

    if(input_file.fail())
    {
        std::cout << "Arquivo inexistente." << std::endl;
    }
    else
    {
        while(std::getline(input_file, linha))
        {
            if(linha.substr(0, 1) == "#")
            {
                current_date = linha.substr(2);
            }
            else if(linha.substr(0, 1) == "-")
            {
                current_content = linha.substr(11);
                current_time = linha.substr(2, 8);
                if(messages_size >= messages_capacity)
                {
                    reallocate_messages();
                }
                messages[messages_size] = Message(current_content, current_date, current_time);
                messages_size++;
            }
        }
    }
    input_file.close();
}

void Diary::add(const std::string& message_content)
{
    std::ofstream output_file(file_name, std::ios::app);
    Message msg(message_content);
    bool its_a_new_day = !msg.date.equals(messages[messages_size-1].date);

    if(messages_size >= messages_capacity)
    {
        reallocate_messages();
    }
    messages[messages_size] = msg;
    messages_size++;

    if(its_a_new_day)
    {
        output_file << std::endl << "# " << msg.date.to_string() << std::endl << std::endl;
    }
    output_file << "- " << msg.time.to_string() << " " << msg.content << std::endl;
    output_file.close();
    std::cout << "Mensagem adicionada!" << std::endl;
}

void Diary::print()
{
    for(int i=0; i<messages_size; i++)
    {
        std::cout << messages[i].to_string() << std::endl;
    }
}

Message* Diary::search(const std::string key)
{
    Message* found = nullptr;
    for(int i=0; i<messages_size; i++)
    {
        if(messages[i].content.find(key) != std::string::npos)
        {
            found = &messages[i];
            i = messages_size;
        }
    }
    return found;
}