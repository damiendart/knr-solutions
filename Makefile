# This file was written by Damien Dart, <damiendart@pobox.com>. This is free
# and unencumbered software released into the public domain. For more
# information, please refer to the accompanying "UNLICENCE" file.

PATH := $(shell pwd):$(PATH)
SOURCE_FOLDER = src/

%: $(SOURCE_FOLDER)%.c
	gcc -O2 -pendantic -std=c99 -Wall -Wextra -Werror $< -o $@
.PHONY: all clean test
all: $(patsubst $(SOURCE_FOLDER)%.c, %, $(wildcard $(SOURCE_FOLDER)*.c))
clean:
	rm -rf exercise* 
test: all
	prove -v tests/*.t
