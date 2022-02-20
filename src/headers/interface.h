// header for interface class, containing methods to read new solutions and print the results

#include <string>
#include <vector>

#include "words.h"


using std::string;
using std::vector;

#ifndef _interface_H_
#define _interface_H_

class GameInterface
{
    public:
    
    vector<string> createOutput(const int &game_length, const int &word_length); // create the output vector and fill it with correctly formated empty lines
    void updateOutput(vector<string> &output, const string &colored_guess, const int &count); // update the output by adding a new guess, at the correct place
    void printOutput(const vector<string> &output, const string &spacer); // display all guesses

    string getInput(const string &input_msg); // get input for a new guess
    string printOutput_getInput(const vector<string> &output, const string &spacer, const int &word_length, const string &input_msg, Words &Words); // gets input and prints output, until, the output matches the correct word length

    string colorText(const string &currentGuess, const vector<int> &resultMap, const bool &correct_guess); // color the text, according to the result map


};

#endif