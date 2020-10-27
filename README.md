# _printf
With this project we were able to replicate the behavior of the original printf function in C language. Here are some considerations to have in mind:

# Prototype
int _printf(const char * format, ...);

- Our function will return an integer. In this case it will return the number of printed charact
ers.
- This first argument is a string of characters. Here we could receive plain characters to be printed as they arrive or we will evaluate parameters given after the % symbol. Each parameter will let us print an argument according to the corresponding format. Of course there are several considerations to have in mind. See also man page.
- Since this is a variadic function, it is able to receive an undetermined number of arguments.

# Specifiers
These are the specifiers our _printf is able to print if you mention it:

- c: to print a character.
- s: to print a string.
- d: to print an integer-
- i: to print an integer-
- r: to print a string in reverse.
- R: to print a string in rot13 format.
- S: to print an string with non printable characters.

# Structure and flowchart
The project is based with the following functions and files:

- holberton.h: header which contains the functions prototypes, structures and the libraries to b
e used.
- _printf.c: file containing the main function of all the project. It will receive the string t
o be printed but it will send them to the corresponding function according to the specifier.
- printf_func_1.c: first 5 functions containing c, s, d(same as i), r, and R algorithms to print the
string if it matches with one of them.
- printf_func_2.c: containing S function to print the string if it matches with the S specifier
- _putchar.c: containing the function that will print each character of the string when it corr
esponds.
