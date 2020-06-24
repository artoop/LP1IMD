#include "App.h"
#include <iostream>
#include <Diary.h>

int main(int argc, char* argv[])
{
   // App aplicativo("diary.md");
   // return aplicativo.run(argc, argv);

   //Teste de impressao do array
    Diary diario("arquivo.txt");
    std::string inpt;

    for(int i=0; i<10; i++)
    {
        diario.print();
        std::cout << "__________________________" << std::endl;
        std::cout << ": ";
        std::getline(std::cin, inpt);
        diario.add(inpt);

        system("clear");
    }
    return 0;
}