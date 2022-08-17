# Brainfuck programming language

Brainfuck is a programming language created by Urban Müller in 1993. Its corresponding computer has an array of memory cells. Let's say the array is 30,000 cells long. There is a pointer, which points to the first memory cell at the start. Its processor accepts only 8 operators. A program in Brainfuck consists of these operators to realise some function.

| Command | Description |
| ------- | !---------- |
| ```>``` | Move the pointer to the right |
| ```<``` | Move the pointer to the left |
| ```+``` | Increment the memory cell at the pointer |
| ```-``` | Decrement the memory cell at the pointer |
| ```.``` | Output the character signified by the cell at the pointer |
| ```,``` | Input a character and store it in the cell at the pointer |
| ```[``` | Jump past the matching ] if the cell at the pointer is 0 |
| ```]``` | Jump back to the matching [ if the cell at the pointer is nonzero |

There is no actual Brainfuck computer. But it is so simple that it can be simulated with your desktop computer. For practical purpose, the value of each cell is interpreted according to the ASCII table. Each program is stored as a text filein your computer or as a string of ASCII characters. The result of a program is shown in your computer screen. 

There are many implementation of Brainfuck compiler or interpreter. Their function is to translate and run the Brainfuck code to human readable results. 

## Reference

* [esolang wiki](https://esolangs.org/wiki/Brainfuck)
* [basics of brainfuck](https://gist.github.com/roachhd/dce54bec8ba55fb17d3a)

