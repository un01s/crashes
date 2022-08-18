/*
 * Notes:
 * this simple code with two functions is good to build (compile and link).
 * but it will cause a segment fault.
 * 
 * this is a form of tail-recursion with no end.
 *
 * How to build the code and run it:
 *
 * open a terminal:
 * 
 * $ gcc --version
   Configured with: --prefix=/Applications/Xcode.app/Contents/Developer/usr --with-gxx-include-dir=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/c++/4.2.1
Apple clang version 13.0.0 (clang-1300.0.29.30)
Target: arm64-apple-darwin21.2.0
Thread model: posix
 
 * $ gcc ex01.c
 * $ ./a.out
zsh: segmentation fault  ./a.out
 
 *
 * un01s 
 * 2022-08-17
 *
 */
void func() {
  func();
}

int main() {
  func();
}
