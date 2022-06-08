#include <unistd.h>
#include "main.h"

/**
 * main- function prints _putchar
 * A program which prints _putchar followed by a new line
 * Retun: 0
 */

int main(void)
{
     char *sh = "_putchar";
     while (*sh)
     { 
	     _putchar(*sh);
	     sh++;
     }
     _putchar('\n');
     return (0);
}      
