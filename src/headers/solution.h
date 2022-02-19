// header for solution class

#include <string>
#include <vector>


using std::string;
using std::vector;


#ifndef _solution_H_
#define _solution_H_


class Solution
{
    public:
    void generateSolution();
    vector<int> mapGuess(const string &guess);
    bool checkGuess(const vector<int> &resultMap);

    private:
    string solution;
    vector<string> possible_solutions = {"traum", "farbe", "super", "trees"};
};


#endif