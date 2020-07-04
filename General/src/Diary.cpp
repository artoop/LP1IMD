#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
#include "Diary.h"

Diary::Diary(const std::string& filename)
{
    file_name = filename;
    read_from_file();
}

/*void Diary::reallocate_messages()
{
    messages_capacity *= 2;
    Message* new_array = new Message[messages_capacity];

    for(size_t i=0; i<messages_capacity/2; i++)
    {
        new_array[i] = messages[i];
    }

    delete [] messages;
    messages = new_array;
}*/

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
                /*if(messages_size >= messages_capacity)
                {
                    reallocate_messages();
                }*/
                messages.push_back(Message(current_content, current_date, current_time));
            }
        }
    }
    input_file.close();
}

void Diary::add(const std::string& message_content)
{
    std::ofstream output_file(file_name, std::ios::app);
    Message msg(message_content);
    
    bool its_a_new_day = true;

    if(!messages.empty() && msg.date.equals(messages.back().date))
    {
        its_a_new_day = false;
    }

    messages.push_back(msg);
    
    if(its_a_new_day)
    {
        output_file << std::endl << "# " << msg.date.to_string() << std::endl << std::endl;
    }
    output_file << "- " << msg.time.to_string() << " " << msg.content << std::endl;
    output_file.close();
    std::cout << "Mensagem adicionada!" << std::endl;
}

std::vector<Message> Diary::list()
{
    return messages;
}

std::vector<Message*> Diary::search(const std::string key)
{
    std::vector<Message*> found;
    for(auto &m : messages)
    {
        if(m.content.find(key) != std::string::npos)
        {
            found.push_back(&m);
        }
    }
    return found;
}