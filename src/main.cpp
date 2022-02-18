// main file for wordle clone made in cpp

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

#include "interface.h"

using std::cout;
using std::vector;
using std::string;


int main()
{
    gameInterface Interface;
    
    vector<int> resultMap = {1, 0, 2, 1, 0};
    string wort = Interface.input(5);


    Interface.printResult(wort, resultMap);
    
    cout << std::endl;
    return EXIT_SUCCESS;
}