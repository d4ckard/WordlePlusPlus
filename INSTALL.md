# Installation

> All of the following commands will have to be executed in your terminal of choice

There are two ways available to install WordlePlusPlus.
Either way clone this repository first, by running ```git clone https://github.com/d4ckard/WordlePlusPlus.git```.

After that move into the repository via ```cd WordlePlusPlus/```.


### Install the compiled binary file for **Linux**
- If you are on **Linux**, change directory into ```bin/```.
> Now you could just run the binary via ```./wordlePlusPlus``` and start playing.
- Otherwise run ```sudo cp wordlePlusPlus /usr/local/bin/``` This will copy the game's binary to your local binaries, so can execute it globally on your current user. 
- Now just run ```wordlePlusPlus``` to play the game, after restarting your terminal.


### Compiling the source code and install
- Change directory into ```src/```.
- Now use the [**g++** compiler](https://www.geeksforgeeks.org/compiling-with-g-plus-plus/), to compile all of the source files into an executable.
```g++ -o wordlePlusPlus main.cpp interface.cpp solution.cpp word_list.cpp words.cpp```
> Now you could just run the binary via ```./wordlePlusPlus``` and start playing.
- Otherwise run ```sudo cp wordlePlusPlus /usr/local/bin/```. This will copy the game's binary to your local binaries, so can execute it globally on your current user.
- Now just run ```wordlePlusPlus``` to play the game, after restarting your terminal.
