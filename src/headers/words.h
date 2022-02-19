// header for pre compiled file, containing all possible words and solutions

#include <vector>
#include <string>

using std::string;

#ifndef _words_H_
#define _words_H_


class Words
{
    public:
    bool checkIf_occurs(const string &guess);
    string returnSolution(const int &randInt);
    void set_lists();
    int sizeOfpossible_solutions();

    private:
    void set_solutions_content();
    void set_allowed_content();
    std::vector<string> possible_solutions;
    std::vector<string> allowed_words;
};

#endif
