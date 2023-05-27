CC := gcc
CFLAGS := -g -O -Wall -Werror -std=c99

CMDS := cat

cat: cat.c
	$(CC) cat.c -o cat $(CFLAGS)

.PHONY: clean
clean:
	rm -rf $(CMDS)
