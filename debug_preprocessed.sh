#!/usr/bin/sh

clang++ \
	-g -O0 \
	-Wall -Wextra -Wpedantic -Wno-extra-semi \
	-Wno-language-extension-token -Wno-gnu-zero-variadic-macro-arguments -Wno-gnu-statement-expression \
	-fsanitize=undefined -fsanitize=address \
	-x c++ ./preprocessed_playground.cpp \
	-o playground.x64

if [ $? -eq 0 ]; then
	./playground.x64
fi
