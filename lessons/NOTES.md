# Lessons

## 01 computer on paper

## Brainfuck and Turing machine: what is a computer?

Brainfuck is one programming language with only eight instructions. Brainfuck is also a computer that transforms the input of instructions into a string of texts or numbers. It is a variant of Turing machine. It is as powerful as any existing computers with just limited means of input and output.

As a computer, BF has three main parts:
* an array of memory cells arranged along a line
** each cell has the initial value of zero
** each cell has an address 
** the address of the first cell is zero, the address of the second cell is one, and so on
** the number of cells is big enough to hold any programs
* a pointer that can be moved along the cells according to the instructions
* a processor that is capable to move the pointer, read and write to a memory cell according to the instructions

As a programming language, BF has eight instructions:

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

## BF programs: hello computer

## How to write the code for a BF computer?

### ASCII table

Any character has a value as defined in the ASCII table. More if we go to Unicode, many letters and symbols could be found there.

For example, the string of ```Hello world!``` is actually a string of numbers defined in the ASCII table, 72, 101, 108, 108, 111, 32, 119, 111, 114, 108, 100, 33.



