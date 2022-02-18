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

    empty_line += paint::neutral;
    for (int i = 0; i < word_length; i++)
    {
        empty_line.push_back(empty);
    }
    empty_line += paint::close;

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



string GameInterface::printOutput(const vector<string> &output, const int &msg_length, const int &length, const string &input_msg)
{

    string space; char empty = ' '; // string consisting of msg_lenght * ' '
    for (int i = 0; i < msg_length; i++)
    {
        space.push_back(empty);
    }

    string guessInput;

    do 
    {
        system("clear");

        for (int i = 0; i < static_cast<int>(output.size()); i++)
        {
            cout << space << output.at(i) << "\n";
        }

        cout << input_msg;
        cin >> guessInput;

    } while (static_cast<int>(guessInput.size()) != length);

    return guessInput;

}



string GameInterface::colorText(const string &guess, const vector<int> &resultMap)
{
    string coloredWord;

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
                color = paint::neutral;
                break;

            case 1:
                color = paint::yellow;
                break;

            case 2:
                color = paint::blue;
                break;
            
            default:
                break;
            }

            coloredChars.push_back(color);
            strOf_guess_at_i = guess.at(i);
            coloredChars.push_back(strOf_guess_at_i);
            coloredChars.push_back(paint::close);
        }

        string tempStr;
        for (int i = 0; i < static_cast<int>(coloredChars.size()); i++)
        {   
            coloredWord += coloredChars.at(i);
        }
    }
    return coloredWord;
}
