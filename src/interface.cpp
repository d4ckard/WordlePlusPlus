// contains methods for gameInterface class

#include <string>
#include <iostream>
#include <vector>
#include <sstream>

#include "interface.h"
#include "colors.h"

using std::string;
using std::vector;
using std::cout;
using std::cin;


string gameInterface::input(int length)
{   
    string GuessInput;
    bool loop_repeated = false;

    do 
    {
        if (loop_repeated)
        {
            cout << "The only allowed length of any word is: " << length << "\n";
            cin.ignore();
        }
        system("clear");

        cout << "Enter a " << length << " letter word: ";

        cin >> GuessInput;
        loop_repeated = true;

    } while (static_cast<int>(GuessInput.size()) != length);

    return GuessInput;
}


void gameInterface::printResult(string currentGuess, vector<int> resultMap)
{
    if (resultMap.size() == currentGuess.size())
    {
        string color;
        string strCurrentGuess_at_i;
        vector<string> coloredChars;


        for (int i = 0; i < static_cast<int>(currentGuess.size()); i++)
        {
            switch (resultMap.at(i))
            {
            case 0:
                color = "";
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
            strCurrentGuess_at_i = currentGuess.at(i); // cast str.at(i) to char
            coloredChars.push_back(strCurrentGuess_at_i);
            coloredChars.push_back(paint::close);
        }

        system("clear");
        for (int i = 0; i < static_cast<int>(coloredChars.size()); i++)
        {   
            cout << coloredChars.at(i);
        }
    }
}
