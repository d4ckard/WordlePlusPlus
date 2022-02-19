// header for solution class

#include <string>
#include <vector>
#include <array>
#include "words.h"



using std::string;
using std::vector;
using std::array;



#ifndef _solution_H_
#define _solution_H_


class Solution
{
    public:
    void generateSolution( Words &Words);
    vector<int> mapGuess(const string &guess);
    bool checkGuess(const vector<int> &resultMap);

    private:
    string solution;
};

#endif