# Wordle++

Terminal based Wordle clone, made with c++.

[![WordlePlusPlus](https://i.postimg.cc/FsNBMYzF/Screenshot-2022-02-20-at-16-46-02.png)](https://postimg.cc/LhQDf6jG)

## Installation

To install this game, it can be downloaded as a binary (Linux) and then execute it in a terminal.
To fully install the game to your system run
```sudo ln -s wordlePlusPlus /usr/local/bin```
This will create a [Link to wikipedia article on symlinks](https://en.wikipedia.org/wiki/Symbolic_link "symlink") to the executable in your current directory.

Otherwise the repository can be cloned and compiled from source.

## Usage

Execute the binary in your terminal like this: "./__file_name__". 
> : )

If you want to compile from source yourselves, execute this in your terminal: "g++ -o __file_name of binary__ main.cpp interface.cpp solution.cpp words.cpp word_lists.cpp".


The rules of the game match the original's rules. 
If the entered word, is not allowed (misspelled or unknown) nothing will happen.

By changing 'game_length', the amount of rounds can be changed, dynamically.
The colors for the different clues in the game can be changed in 'headers/colors.h'.

  
