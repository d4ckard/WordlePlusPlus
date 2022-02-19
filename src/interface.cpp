// contains methods for gameInterface class

#include <string>
#include <iostream>
#include <vector>
#include <sstream>

#include "headers/interface.h"
#include "headers/colors.h"

using std::string;
using std::vector;
using std::cout;
using std::cin;



vector<string> GameInterface::createOutput(const int &game_length, const int &word_length)
{
    string empty_line; char empty = ' ';

    
    for (int i = 0; i < word_length; i++)
    {
        empty_line += paint::neutral;
        for (int j = 0; j < 3; j++) //  makes each box more wide
        {
            empty_line += empty;
        }
        empty_line += paint::close;
        empty_line += empty;
    }
    

    vector<string> output;

    for (int i = 0; i < game_length; i++)
    {
        output.push_back(empty_line);
    }
    
    return output;
}



void GameInterface::updateOutput(vector<string> &output, const string &colored_guess, const int &count)
{
    if (count)
    {
        output.at(count -1) = colored_guess;
    }
}


void GameInterface::printOutput(const vector<string> &output, const string &spacer)
{
    system("clear");


    for (int i = 0; i < static_cast<int>(output.size()); i++)
    {   
        cout << "\n" << spacer << output.at(i) << "\n";
    }

}


string GameInterface::getInput(const string &input_msg)
{
    string guessInput;

    cout << input_msg;
    cin >> guessInput;

    return guessInput;
}


string GameInterface::printOutput_getInput(const vector<string> &output, const string &spacer, const int &word_length, const string &input_msg)
{

    string guessInput;

    do 
    {
    
        printOutput(output, spacer);

        guessInput = getInput(input_msg);


    } while (static_cast<int>(guessInput.size()) != word_length);

    return guessInput;
}



string GameInterface::colorText(const string &guess, const vector<int> &resultMap, const bool &correct_guess)
{
    string coloredWord;

    char empty = ' '; 

    if (resultMap.size() == guess.size())
    {
        string color;
        string strOf_guess_at_i;
        vector<string> coloredChars;


        for (int i = 0; i < static_cast<int>(guess.size()); i++)
        { // set colors of letters in ouput depending on value of resultMap
            switch (resultMap.at(i))
            {
            case 0:
                color = paint::wrong;
                break;

            case 1:
                color = paint::corret;
                break;

            case 2:
                if (correct_guess) color = paint::correct_word;
                else color = paint::correct_spot;
                break;
            
            default:
                break;
            }

            coloredChars.push_back(color);
            strOf_guess_at_i = guess.at(i); coloredChars.push_back(strOf_guess_at_i);
            coloredChars.push_back(paint::close);
        }

        string tempStr;
        for (int i = 0; i < static_cast<int>(coloredChars.size()); i++)
        {   
            coloredWord += coloredChars.at(i);
            coloredWord += empty; // will make each char in the output wide, as each ascii escape code is pushed back
        }
    }
    return coloredWord;
}
