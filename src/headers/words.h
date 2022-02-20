// header for pre compiled file, containing all possible words and solutions

#include <vector>
#include <array>
#include <string>

using std::string;
using std::array;

#ifndef _words_H_
#define _words_H_


class Words
{
    public:
    bool checkIf_occurs(const string &guess); // check if guess occurs in allowed_words
    string returnSolution(const int &randInt); // return an object from possible_solutions by index
    void set_lists(); 
    /* Fill possible_solutions and allowed_words with content
    The functions to fill each list are compiled separately, as they take long to compile
    Instead, the lists could be read from a file, but the current solution is more straightforward and fast enough
    */
    int sizeOfpossible_solutions(); // return the size of possible_solutions

    private:
    void set_solutions_content();
    void set_allowed_content();
    array<string, 2309> possible_solutions;
    array<string, 12918> allowed_words;
};

#endif
