#include <stdio.h>

// Delcare a buffer for user input of size 2048
static char input[2048];

int main(int argc, char **argv) {
  // print version and exit info
  puts("Lispy Version 0.0.0.0.1");
  puts("Press Ctrl+c to Exit\n");

  // in a never ending loop
  while (1) {
    // output our prompt
    fputs("lispy> ", stdout);

    // read a line of user input max size 2048
    fgets(input, 2048, stdin);

    // echo input back to user
    printf("No youre a %s", input);
  }

  return 0;
}
