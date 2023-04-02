CC := gcc
CFLAGS := -g -O -Wall -Werror -std=c99

CMDDIR := commands
CMDS := cat

all: cat

cat: $(CMDDIR)/cat/main.c
	$(CC) -o cat $(CMDDIR)/cat/main.c $(CFLAGS)

.PHONY: clean
clean:
	rm -rf $(CMDS)
