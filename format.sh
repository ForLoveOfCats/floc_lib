#!/usr/bin/sh

find . -name "*.h" -o -name "*.c" | xargs clang-format -i
