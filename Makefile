CC = gcc
CFLAGS = -g -O2 -pendantic -std=c99 -Wall -Wextra
BIN = $(patsubst $(SOURCE_FOLDER)/%.c, %, $(wildcard $(SOURCE_FOLDER)/*.c))
BIN_FOLDER = bin
MKDIR = mkdir -p
RM = rm -rf
SOURCE_FOLDER = src

all: $(addprefix $(BIN_FOLDER)/, $(BIN)) prepare
$(BIN_FOLDER)/%: $(SOURCE_FOLDER)/%.c prepare
	$(CC) $(CFLAGS) $< -o $@
.PHONY: clean
clean:
	$(RM) $(BIN_FOLDER)
prepare:
	@$(MKDIR) $(BIN_FOLDER)
