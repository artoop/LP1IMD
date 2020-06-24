#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
#include "Diary.h"

Diary::Diary(const std::string& filename)
{
    file_name = filename;
    messages_capacity = 1000;
    messages_size = 0;

    messages = new Message[messages_capacity];

}

void Diary::read_from_file()
{
    std::ifstream arquivo_entrada(file_name);
    std::string linha;

    if(arquivo_entrada.fail())
    {
        std::cout << "Arquivo inexistente." << std::endl;
    }
    else
    {
        while(std::getline(arquivo_entrada, linha))
        {
            if(linha.substr(0, 1) == "-")
            {
                std::cout << linha.substr(11) << std::endl;
            }
        }
    }
}

void Diary::add(const std::string& message_content)
{
    Message msg(message_content);
    messages[messages_size] = msg;
    messages_size++;
}

void Diary::write_to_file()
{

}

void Diary::print()
{
    for(int i=0; i<messages_size; i++)
    {
        std::cout << messages[i].datetime.date << " " << messages[i].datetime.time << " : " << messages[i].content << std::endl;
    }
}
