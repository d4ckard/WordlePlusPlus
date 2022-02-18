// header for interface class, containing methods to read new solutions and print the results

#include <string>
#include <vector>


using std::string;
using std::vector;

#ifndef _interface_H_
#define _interface_H_

class GameInterface
{
    public:
    string input(const int &lenght); // get guess for word

    void printResult(const string &currentGuess, const vector<int> &resultMap);

};

#endif