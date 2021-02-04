#!/usr/bin/sh

clang++ \
	-g -O0 \
	-Wall -Wextra -Wpedantic -Wno-extra-semi \
	-Wno-language-extension-token -Wno-gnu-zero-variadic-macro-arguments -Wno-gnu-statement-expression \
	-x c++ ./playground/playground.cpp \
	-E -P \
	-o preprocessed_playground.cpp

