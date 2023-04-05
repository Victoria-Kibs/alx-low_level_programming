#include "main.h"

/* puts_recursion.c */

void _puts_recursion(char *s)
{
    if (*s == '\0') {  // base case: end of string
        _putchar('\n');  // print a new line
        return;
    }
    
    _putchar(*s);             // print the current character
    _puts_recursion(s + 1);   // recursive call to print the rest of the string
}
