CC := gcc
CFLAGS := -g -O -Wall -Werror -std=c99


CMDS := cat echo rm ls

all: $(CMDS)

cat: cat.c
	$(CC) cat.c -o cat $(CFLAGS)

echo: echo.c
	$(CC) echo.c -o echo $(CFLAGS)

rm: rm.c
	$(CC) rm.c -o rm $(CFLAGS)

ls: ls.c
	$(CC) ls.c -o ls $(CFLAGS)

.PHONY: clean
clean:
	rm -rf $(CMDS) *~
