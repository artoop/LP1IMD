#ifndef AGENCIA_H
#define AGENCIA_H

#include <string>

class Branch {

    private:
        std::string name;
        std::string id;

    public:
        Branch();
        Branch(std::string name);

        void setName(std::string name);
        std::string getName();

        void setId(std::string id);
        std::string getId();
};
#endif