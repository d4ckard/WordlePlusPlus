

#include <string>

using std::string;


#ifndef _colors_H_
#define _colors_H_

namespace paint 
{
    string close = "\33[0m";

    string neutral = "\33[7m";
    string yellow = "\33[33;7m";
    string blue = "\33[34;7m";
    string green = "\33[32;7m";
    string red = "\33[31;7m";
}



#endif