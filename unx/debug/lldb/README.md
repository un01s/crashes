# Use LLDB to debug a segment fault

## build with debug info

```
$ clang++ -std=c++17 -Wall -ggdb3 ./simple.cpp -o simple
$./simple
zsh: segmentation fault  ./simple
```

## debug with lldb

```
$lldb ./simple
(lldb) target create "./simple"
Current executable set to '/Users/wb/io/crashes/unx/debug/gdb/simple' (arm64).
(lldb) list
(lldb) b foo
Breakpoint 1: where = simple`foo() + 4 at simple.cpp:2:9, address = 0x0000000100003f6c
(lldb) r
Process 19532 launched: '/Users/wb/io/crashes/unx/debug/gdb/simple' (arm64)
Process 19532 stopped
* thread #1, queue = 'com.apple.main-thread', stop reason = breakpoint 1.1
    frame #0: 0x0000000100003f6c simple`foo() at simple.cpp:2:9
   1   	void foo() {
-> 2   	  char *x = 0;
   3   	  *x = 3;
   4   	}
   5   	
   6   	int main() {
   7   	  foo();
Target 0: (simple) stopped.
(lldb) n
Process 19532 stopped
* thread #1, queue = 'com.apple.main-thread', stop reason = step over
    frame #0: 0x0000000100003f70 simple`foo() at simple.cpp:3:4
   1   	void foo() {
   2   	  char *x = 0;
-> 3   	  *x = 3;
   4   	}
   5   	
   6   	int main() {
   7   	  foo();
Target 0: (simple) stopped.
(lldb) p x
(char *) $0 = 0x0000000000000000
(lldb) n
Process 19532 stopped
* thread #1, queue = 'com.apple.main-thread', stop reason = EXC_BAD_ACCESS (code=1, address=0x0)
    frame #0: 0x0000000100003f78 simple`foo() at simple.cpp:3:6
   1   	void foo() {
   2   	  char *x = 0;
-> 3   	  *x = 3;
   4   	}
   5   	
   6   	int main() {
   7   	  foo();
Target 0: (simple) stopped.
(lldb) quit
```

The error is ```EXC_BAD_ACCESS```. 
