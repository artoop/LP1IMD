#include "App.h"
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <sstream>

std::unordered_map<std::string,std::string> get_config_map(const std::string& config_path)
{
    std::unordered_map<std::string,std::string> config_map;
    std::ifstream input_config(config_path);
    std::string line;
    std::string key;
    std::string value;

    if(input_config.good())
    {
        while(std::getline(input_config, line))
        {
            std::istringstream line_stream(line);
            std::getline(line_stream, key, '=');
            std::getline(line_stream, value);
            config_map[key] = value;
        }
    }
    else
    {
        input_config.close();
        std::ofstream output_config(config_path);

        config_map["path"]="diary.md";
        config_map["default_format"]="%d %t: %m";

        for(auto it : config_map)
        {
            output_config << it.first << "=" << it.second << std::endl; 
        }
    }
    return config_map;
}

int main(int argc, char* argv[])
{    
    App aplicativo(get_config_map("diary.config"));
    return aplicativo.run(argc, argv);
}