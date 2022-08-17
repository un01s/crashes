# Brainfuck programming language

Brainfuck is a programming language created by Urban Müller in 1993. 

* The underlying computer has an array of memory cells. Let's say the array is 30,000 cells long. 
* Each cell has an index or address starting from 0. 
* The value of each cell can be read or written according to the ASCII table. The initial values are all zeros. 
* There is a pointer, which points to the first memory cell at the start. 
* This pointer can point to one cell at a time.
* This pointer can be moved along using the operators. 
* Its processor accepts only 8 operators. 

| Operator | Description |
| :-------: | :---------- |
| ```>``` | Move the pointer to the right |
| ```<``` | Move the pointer to the left |
| ```+``` | Increment the memory cell at the pointer |
| ```-``` | Decrement the memory cell at the pointer |
| ```.``` | Output the character signified by the cell at the pointer |
| ```,``` | Input a character and store it in the cell at the pointer |
| ```[``` | Jump past the matching ] if the cell at the pointer is 0 |
| ```]``` | Jump back to the matching [ if the cell at the pointer is nonzero |

A program in Brainfuck consists of these operators to realise some function. Basically the program moves the pointer along the array of memory cells, write different values to cells and read them ifnecessary.

There is no actual Brainfuck computer. But it is so simple that it can be simulated with your desktop computer. For practical purpose, the value of each cell is interpreted according to the ASCII table. Each program is stored as a text filein your computer or as a string of ASCII characters. The result of a program is shown in your computer screen. 

There are many implementation of Brainfuck compiler or interpreter. Their function is to translate and run the Brainfuck code to human readable results. 

## Reference

* [esolang wiki](https://esolangs.org/wiki/Brainfuck)
* [basics of brainfuck](https://gist.github.com/roachhd/dce54bec8ba55fb17d3a)

