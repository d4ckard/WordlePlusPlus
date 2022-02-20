// main file for wordle clone made in cpp

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

#include "headers/interface.h"
#include "headers/solution.h"
#include "headers/words.h"

using std::cout;
using std::vector;
using std::string;



string create_spacer(const string &input_msg); // create spacer, for dynamic interface



int main()
{   
    system("clear");

    GameInterface Interface;
    Words Words; Words.set_lists(); // load word lists
    Solution Solution; Solution.generateSolution(Words);

    bool correct_guess = false;
    string colored_guess;


    int rounds = 0; // default shoud be 0
    int word_length = 5; // < -- could be changed (if the words if 'word_lists.cpp' are changed to match the new value)
    int game_length = 6; // < -- could be changed


    string input_msg; input_msg += "\nEnter a "; input_msg += '0' + word_length; input_msg += " letter word: ";
    string spacer = create_spacer(input_msg);

    vector<string> output = Interface.createOutput(game_length, word_length);

    do 
    {
        Interface.updateOutput(output, colored_guess, rounds); // updating the output according to all guess's, that have been made
        string guess = Interface.printOutput_getInput(output, spacer, word_length, input_msg, Words); // displays the output, as well as a menu to enter new guess's; acts as internal do loop
        
        
        vector<int> resultMap = Solution.mapGuess(guess); // checks the guess for correctness
        correct_guess = Solution.checkGuess(resultMap); // checks if the guess matches the solution

        colored_guess = Interface.colorText(guess, resultMap, correct_guess); // return a colored version, of the guess, according to the result map returned by mapGuess()

        rounds++;

    } while (!correct_guess && rounds < game_length); // game ends, if the the round limit as been reached, or the guess is correct

    
    Interface.updateOutput(output, colored_guess, rounds); // updating the output according to all inputs, that have been made
    Interface.printOutput(output, spacer);
    

    if (!correct_guess) // print correct solution, if it wasn't guessed
    {
        Solution.printSolution(input_msg, word_length, Interface); 
    }

    cout << std::endl;
    return EXIT_SUCCESS;
}



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
