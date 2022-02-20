// header for solution class

#include <string>
#include <vector>
#include <array>

#include "words.h"
#include "interface.h"



using std::string;
using std::vector;
using std::array;



#ifndef _solution_H_
#define _solution_H_


class Solution
{
    public:
    void generateSolution( Words &Words); // randomly generate a new solution for the game
    vector<int> mapGuess(const string &guess); // create map that represents, the correctness of the guess
    bool checkGuess(const vector<int> &resultMap); // check if guess is correct

    void printSolution(const string &input_msg, const int &word_lenght, GameInterface Interface); // display solution, dynamically formated to match  the rest of the outputs

    private:
    string solution;
};

#endif
