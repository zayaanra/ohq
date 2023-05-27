#include <stdio.h>
#include <string.h>

void w_stdout(char *filename);
void parse_options();

// Writes the given file to standard output
void w_stdout(char *filename) {
  FILE *fp;
  fp = fopen(filename, "r");
  if (fp == NULL) {
    fprintf(stderr, "cat: %s: No such file or directory\n", filename);
  } else {
    // Process file until EOF
    int ch;
    while ((ch = getc(fp)) != EOF) {
      putchar(ch);
    }
    fclose(fp);
  }
}


int main(int argc, char *argv[]) {
  // Check usage
  if (argc < 2) {
    fprintf(stderr, "cat: Missing operand\n");
  } else {
    // TODO - parse options
    for(int i = 1; i<argc; i++) {
      w_stdout(argv[i]);
    }
  }
  
  return 0;
}
