# UNIX Commands
## Objective
I will be implementing several UNIX commands in this project to get better and learn more about systems programming.
Some examples of the UNIX commands I'll be implementing:
- cat
- ls
- echo
- touch
- file
and many more... (hopefully)

## How to use a command
There is a given Makefile that generates the executable for all commands. Here's how to run any of the commands that are implemented:
1. Run `make`.
2. For any of the commands, where `<command>` is a placeholder for the executable of the command you want to run: `./<command> arg1 arg2 ...`
3. To get rid of any executables, you can do `make clean`. You can also do `make` to re-make the executables.
4. Running a command implies that you know how to use the command beforehand but if you don't, you can always look up the `man` page for the specified command by doing this: `man <command>` (`man 3 <command>` might be better in some cases).
Most of the commands will have a form of error checking, but it is possible that not all options provided by the official UNIX versions of these commands have been implemented.
