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
    
    vector<string> createOutput(const int &game_length, const int &word_length);

    void updateOutput(vector<string> &output, const string &colored_guess, const int &count);

    void printOutput(const vector<string> &output, const string &spacer);
    string getInput(const string &input_msg);
    string printOutput_getInput(const vector<string> &output, const string &spacer, const int &word_length, const string &input_msg);

    string colorText(const string &currentGuess, const vector<int> &resultMap, const bool &correct_guess);

    

};

#endif