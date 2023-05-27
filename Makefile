CC := gcc
CFLAGS := -g -O -Wall -Werror -std=c99


CMDS := cat echo rm

all: $(CMDS)

cat: cat.c
	$(CC) cat.c -o cat $(CFLAGS)

echo: echo.c
	$(CC) echo.c -o echo $(CFLAGS)

rm: rm.c
	$(CC) rm.c -o rm $(CFLAGS)

.PHONY: clean
clean:
	rm -rf $(CMDS) *~
