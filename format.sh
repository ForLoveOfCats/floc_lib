#!/usr/bin/sh

find . -name "*.hpp" -o -name "*.cpp" | xargs clang-format -i
