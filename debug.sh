#!/usr/bin/sh

clang \
	-g -O0 \
	-Wall -Wextra -Wpedantic -Wno-extra-semi \
	-fsanitize=undefined -fsanitize=address \
	-x c ./playground/playground.c \
	-o playground.x64

if [ $? -eq 0 ]; then
	./playground.x64
fi
