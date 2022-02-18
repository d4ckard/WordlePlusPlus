// methods for solution class

#include <string>
#include <vector>
#include <random>
#include <iostream>

#include "headers/solution.h"


using std::string;
using std::vector;
using std::cout;
using std::cin;


void Solution::generateSolution()
{
    std::random_device rand; // seed for random-number engine 
    std::mt19937 rng(rand()); // definition for used random-number engine (Mersenne-Twister engine)
    std::uniform_int_distribution<int> uni(0, (static_cast<int>(possible_solutions.size()) -1)); // guaranteed unbaised output

    int randInt = uni(rng); // generating the randInt itself

    solution = possible_solutions.at(randInt); // pick random word of all possible words
}


vector<int> Solution::checkGuess(const string &guess)
{
    string tempSolution = solution; // tempSolution, will be edited
    char filler = '0';
    vector<int> resultMap(static_cast<int>(guess.size())); // get dynamic size
    int i, j;

    /*
    list filled with 0's is created
    for loop iterates through each letter in guess and per letter in guess
    the second for loop iteraties through every letter in the solution

    if the letters match, at the same index in both words, the result map at the same
    index is set to 2
    If the letters match, at different indexes in both words, the result map, at the index
    of the guess is set to 1

    each time there is a match, the index of the match in the solution is set to 0
    by doing this, has the effect that each corret letter is counted only once

    as soon as a match occurs, the second loop is broken, so each currect letter is only
    counted once

    */

    for (i = 0; i < static_cast<int>(guess.size()); i++)
    {
        for (j = 0; j < static_cast<int>(tempSolution.size()); j++)
        {
            if (guess.at(i) == tempSolution.at(j))
            {
                if (guess.at(i) == tempSolution.at(i))
                {
                    resultMap.at(i) = 2;
                    tempSolution.at(i) = filler;
                    break;
                }
                else
                {
                    resultMap.at(i) = 1;
                    tempSolution.at(j) = filler;
                    break;
                }
            }
        }
    }

    return resultMap;
}