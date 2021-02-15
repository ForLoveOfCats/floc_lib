# A small header library for the fun of it

As part of my experimentation with some things for a project I've been
working on I decided to write a small C header library to see what sort
of things I could do with what langauge features I had available to me.
Unfortunately several of the things I wanted to do required importing
some C++ features. Additionally several GNU C/C++ extensions are being used.

#### Video demo: https://www.youtube.com/watch?v=jAdAF3RJkPg

### C++ features used:

 * Function overloading
 * `auto` (makes some macro stuff nicer)
 * References `T&` (because taking the address of a literal is disallowed)

### GNU C/C++ extensions used:

 * Statement expressions
 * ` __attribute__((__cleanup__(function_name)))`
 * Double pound sign `##` between comma and `__VA_ARGS__`
 * `typeof` expression

This is known to compile and run with Clang and GCC when compiling in C++
mode. The example code in `playground/playground.cpp` successfully runs
with both both `ubsan` and `asan`.

Please do not use this for any serious projects. The hashmap implementation
is extremely amateurish, the API coverage is poor, and the compiler feature
requirements makes this not as portable as I would have wanted. If you really
need typesafe containers and other goodies for pure C then you should
probably take a look at the [stb](https://github.com/nothings/stb) libraries.
I've not used any of them myself but I've heard great things about them.
