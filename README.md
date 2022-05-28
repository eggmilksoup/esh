esh, the Egg Shell
==================

I wanted to try forking mksh and then I realized "heck I don't understand this code at all" and then I thought "hey, why don't I write my own shell so I can understand shells better".

This shell will be designed to be a simple interactive shell that may or may not be functional for any other purpose.

The project's goals are as follows:

1. create a shell that reads from standard input and executes the commands given

2. provide simple tab completion

3. "syntax" highlighting (essentially: word is yellow if it can be completed, green if it is a command, and red if it is not).

4. vi-alike line editing using the escape key

5. posix `sh` compliance
