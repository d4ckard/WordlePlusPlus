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

string create_spacer(const string &input_msg)
{
    int msg_length = static_cast<int>(input_msg.size());

    string spacer; char empty = ' '; // string consisting of msg_lenght * ' '
    for (int i = 0; i < msg_length; i++)
    {
        spacer += empty;
    }

    return spacer;
}


int main()
{   
    system("clear");

    GameInterface Interface;
    Solution Solution;
    Solution.generateSolution();

    bool correct_guess = false;
    int rounds = 0;
    string colored_guess;
    int word_length = 5;
    int game_length = 6;
    string input_msg; input_msg += "\nEnter a "; input_msg += '0' + word_length; input_msg += " letter word: ";
    string spacer = create_spacer(input_msg);
    vector<string> output = Interface.createOutput(game_length, word_length);

    do 
    {
        Interface.updateOutput(output, colored_guess, rounds); // updating the output according to all inputs, that have been made
        string guess = Interface.printOutput_getInput(output, spacer, word_length, input_msg); // displays a menu, to enter wordsd, as well as the output

        vector<int> resultMap = Solution.mapGuess(guess); // checks, if the new input is valid
        correct_guess = Solution.checkGuess(resultMap);

        colored_guess = Interface.colorText(guess, resultMap, correct_guess); // return a colored version, of the guess, according to the result map returned by mapGuess()

        rounds++;

    } while (!correct_guess && rounds < game_length);

    Interface.updateOutput(output, colored_guess, rounds); // updating the output according to all inputs, that have been made
    Interface.printOutput(output, spacer);

    cout << std::endl;
    return EXIT_SUCCESS;
}