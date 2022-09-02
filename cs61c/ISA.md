# ISA = instruction set architecture

There are four main functions of a computer that make user interaction possible:

* Input: data given to the computer
* Processing: handle the instructions according to the design
* Memory: either temporary or permanent storage
* Output: results returned from the computer

## ISA: the boundary between software and hardware of a processor

ISA is the part of the processor which is visible to the programmer or compiler writer. It can be divided into 5 categories:

* operand storage in the processor: where are the operands kept other than in memory?
* number of explicit named operands: how many operands are named in a typical instruction?
* operand location: can any ALU intruction operand be located in memory? Or must all operands be kept internally in the processor? ALU (arithmetic logical unit) is one part of the processor hardware for addition operations.
* type and size of operands: what is the type and size of each operand and how is it specified?

The first category is the most distinguishing factor of a processor.

There common types of ISA:

* stack: the operands are implicitly on top of a stack
* accumulator: the operands are centered around the accumulator implicitly
* general purpose register (GPR): all operands are explicitly mentioned that they are either registers or memory locations. Usually registers are some special memory loations within the processor. But you can use some memory locations as registers.

For example, to get the pseudo-assembly code ```C = A + B``` done in different architectures:

| Stack | accumulator | GPR |
| ----- | ----------- | --- |
| PUSH A | LOAD A | LOAD R1, A |
| PUSH B | ADD B | ADD R1, B |
| ADD | STORE C | STORE R1, C |
| POP C | | |

Many processors have the mixed architectures.

| | pros | cons |
|--- | ----- | ----------- |
| stack | simple model of expression evaluation. short instructions| a stack can't be randomly accessed. hard to generate efficient code. stack is the bottleneck | 
| accumulator | short instructions | the accumulator is only temporary storage. so the memory traffic is the highest for this |
| GPR | easy code generation. data can be stored for long periods in registers | all operands must be named leading to longer instructions |

### ALU

An Arithmetic Logic Unit (ALU) is a digital circuit used to perform arithmetic and logic operations. It is the fundamental building block of the CPU.

* Addition & subtraction
* Determining equality
* AND/OR/XOR/NOR/NOT/NAND logic gates and more!

### Registers

A register is a volatile memory system that provides the CPU with rapid access to information it is immediately using.

* Store temporary data for immediate processing by the ALU
* Hold "flag" information if an operation results in overflow or triggers other flags
* Hold the location of the next instruction to be processed by the CPU

### Computer Instructions

Computer instructions are written in binary, also known as machine code. Computer hardware operates on a series of these binary instructions through pulsating power signals that signify either OFF or ON based on the binary digits 0 and 1 respectively.

## CISC vs RISC

### CISC = complex instruction set computer

CISC (Complex Instruction Set Computer) is an ISA design practice that focuses on multi-step instructions and complex, power-consuming hardware. These designs primarily focus on hardware components and binary instruction complexity. Processing components are typically not interchangeable with RISC-designed systems.

* Single instructions take more than one CPU cycle to complete
* Instruction length varies based on the instruction type
* Hardware must be designed to accept more complicated instructions

### RISC = reduced instruction set computer

RISC (Reduced Instruction Set Computer) is an ISA design practice of ISAs that focuses on simple, quickly executed instructions to improve efficiency and reduce power consumption. These designs primarily focus on simple hardware components and reducing binary instruction complexity. Processing components are typically not interchangeable with CISC-designed systems.

* Single instructions take only one CPU cycle to complete
* Instruction lengths are fixed, regardless of the instruction type
* Reduced complexity of hardware leads to less power consumption at the expense of overall processing times.

## reference

* [UC Berkeley CS courses](https://www2.eecs.berkeley.edu/Courses/CS/)
* [Stack machine and Forth programming language](https://users.ece.cmu.edu/~koopman/stack.html)
 
