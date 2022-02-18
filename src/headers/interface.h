// header for interface class, containing methods to read new solutions and print the results

#include <string>
#include <vector>


using std::string;
using std::vector;

#ifndef _interface_H_
#define _interface_H_

class gameInterface
{
    public:
    string input(int lenght); // get guess for word

    void printResult(string currentGuess, vector<int> resultMap);

};

#endif