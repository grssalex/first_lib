Custom C Library - Utility Functions
Welcome to my custom C library, a collection of fundamental utility functions written in C, designed to handle common operations like string manipulation, number handling, and basic array operations. These functions serve as foundational tools for various C projects and can be reused across different programs.

Table of Contents
Description
Functions List
String Functions
Number Functions
Array Functions


This project contains a series of self-implemented C functions that mimic or extend standard library functionalities. The functions are organized in a modular way and are compatible with any C project. The goal is to provide reusable solutions to common programming tasks like string operations, number formatting, and more.

Functions List


String Functions
my_putchar(char c)
Prints a single character to the standard output.

my_putstr(char const *str)
Prints a string to the standard output.

my_strcpy(char *dest, char const *src)
Copies the content of the source string to the destination string.

my_strncpy(char *dest, char const *src, int n)
Copies up to n characters from the source string to the destination.

my_strlen(char const *str)
Returns the length of the given string.

my_revstr(char *str)
Reverses the given string in place.

my_strstr(char *str, char const *to_find)
Searches for the first occurrence of the substring in the string.



Number Functions
my_isneg(int nb)
Checks if the given number is negative.

my_put_nbr(int nb)
Prints an integer number to the standard output.

my_getnbr(char const *str)
Converts the string to an integer.

my_put_float(float nb)
Prints a floating-point number with two decimal precision.



Array Functions
my_swap(int *a, int *b)
Swaps the values of two integers.

my_show_word_array(char *const *array)
Prints the content of an array of words.
