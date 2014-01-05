# This file was written by Damien Dart, <damiendart@pobox.com>. This is free
# and unencumbered software released into the public domain. For more
# information, please refer to the accompanying "UNLICENCE" file.

CFLAGS = -O2 -pedantic -std=c99 -Wall -Wextra -Werror
PATH := $(shell pwd):$(PATH)
SOURCE_FOLDER = src/

%: $(SOURCE_FOLDER)%.c
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)
.PHONY: all clean test
all: $(patsubst $(SOURCE_FOLDER)%.c, %, $(wildcard $(SOURCE_FOLDER)*.c))
clean:
	rm -rf exercise* 
exercise203: LDFLAGS += -lm
test: all
	prove tests/*.t
