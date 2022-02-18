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

    bool wrong_guess = true;
    int rounds = 0;
    string colored_guess;
    int word_lenght = 5;
    int game_length = 6;
    string input_msg; input_msg += "\nEnter a "; input_msg += '0' + word_lenght; input_msg += " letter word: ";
    int msg_length = static_cast<int>(input_msg.size());
    vector<string> output = Interface.createOutput(game_length, word_lenght);

    do 
    {
        Interface.updateOutput(output, colored_guess, rounds); // updating the output according to all inputs, that have been made

        string guess = Interface.printOutput(output, msg_length, word_lenght, input_msg); // displays a menu, to enter wordsd, as well as the output

        vector<int> resultMap = Solution.checkGuess(guess); // checks, if the new input is valid

        colored_guess = Interface.colorText(guess, resultMap); // return a colored version, of the guess, according to the result map returned by checkGuess()

        rounds++;

    } while (wrong_guess || rounds == game_length -1);
    
    
    cout << std::endl;
    return EXIT_SUCCESS;
}