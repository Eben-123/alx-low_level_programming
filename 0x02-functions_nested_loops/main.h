#include <file>
#include "file"
char *test (void);
int x;
#include "header.h"

int main (void) {
   puts (test ());
}

int x;
char *test (void);

int main (void) {
   puts (test ());
}
#ifndef HEADER_FILE
#define HEADER_FILE

the entire header file file

#endif
