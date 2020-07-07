#include "Agencia.h"
#include <iostream>

Branch::Branch(std::string name)
{
    setName(name);
    setId("xxx-x");
}

Branch::Branch()
{
}

void Branch::setName(std::string name)
{
    this->name = name;
}

std::string Branch::getName()
{
    return name;
}

void Branch::setId(std::string id)
{
    this->id = id;
}

std::string Branch::getId()
{
    return id;
}