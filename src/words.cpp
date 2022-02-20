// file containing functions for words class


#include <array>
#include <string>

#include <iostream>

#include "headers/words.h"


// return an object from possible_solutions by index
string Words::returnSolution(const int &randInt)
{ 
    std::string solution = possible_solutions.at(randInt);
    return solution;
}


// return the size of possible_solutions
int Words::sizeOfpossible_solutions()
{
    return static_cast<int>(possible_solutions.size());
}


// check if guess occurs in allowed_words
bool Words::checkIf_occurs(const string &guess)
{
    bool occurs = false;
    for (int i = 0; i < static_cast<int>(allowed_words.size()); i++)
    {
        if (allowed_words.at(i) == guess)
        {
            occurs = true;
        }
    }
    return occurs;
}


/* Fill possible_solutions and allowed_words with content
The functions to fill each list are compiled separately, as they take long to compile
Instead, the lists could be read from a file, but the current solution is more straightforward and fast enough
*/
void Words::set_lists()
{
    set_solutions_content();
    set_allowed_content();
}


