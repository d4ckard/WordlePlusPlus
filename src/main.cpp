// main file for wordle clone made in cpp

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

#include "headers/interface.h"
#include "headers/solution.h"

using std::cout;
using std::vector;
using std::string;


int main()
{   
    GameInterface Interface;
    Solution Solution;
    Solution.generateSolution();


    string wort = Interface.input(5);
    vector<int> resultMap = Solution.checkGuess(wort);
    Interface.printResult(wort, resultMap);
    
    cout << std::endl;
    return EXIT_SUCCESS;
}