# Wordle++

Terminal based Wordle clone, made with c++.

[![WordlePlusPlus](https://i.postimg.cc/FsNBMYzF/Screenshot-2022-02-20-at-16-46-02.png)](https://postimg.cc/LhQDf6jG)

## Installation

To install this game, it can be downloaded as a binary (either macOs or Linux) and then executed it in a terminal.

Otherwise the repository can be cloned and compiled from source.

## Usage

Execute the binary in your terminal like this: "./__file_name__". 
> : )

If you want to compile from source yourselves, execute this in your terminal: "g++ -o __file_name of binary__ main.cpp interface.cpp solution.cpp words.cpp word_lists.cpp".


The rules of the game match the original's rules. 
If the entered word, is not allowed (misspelled or unknown) nothing will happen.

By changing 'game_length', the amount of rounds can be changed, dynamically.
The colors for the different clues in the game can be changed in 'headers/colors.h'.

  
