#include "App.h"
#include <iostream>

int main(int argc, char* argv[])
{
    App aplicativo("diary.md");
    return aplicativo.run(argc, argv);
}