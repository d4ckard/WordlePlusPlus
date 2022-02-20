

#include <string>

using std::string;


#ifndef _colors_H_
#define _colors_H_

namespace paint 
{
    string close = "\033[0m";
    string blinking = "\033[6m";

    string neutral = "\033[7;1m";
    string grey = "\033[90;7;1m";
    string cyan = "\033[36;7;1m";
    string yellow = "\33[33;7;1m";
    string blue = "\33[34;7;1m";
    string green = "\33[32;7;1m";
    string red = "\33[31;7;1m";

// change to change colors in output:
    string correct_spot = blue;
    string corret = yellow;
    string wrong = neutral;
    string correct_word = green + blinking;
}

#endif
