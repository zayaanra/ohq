CC := gcc
CFLAGS := -g -O -Wall -Werror -std=c99


CMDS := cat echo

all: $(CMDS)

cat: cat.c
	$(CC) cat.c -o cat $(CFLAGS)

echo: echo.c
	$(CC) echo.c -o echo $(CFLAGS)

.PHONY: clean
clean:
	rm -rf $(CMDS) *~
