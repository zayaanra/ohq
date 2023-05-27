#include <stdio.h>

int main(int argc, char *argv[]) {
  // No need to check for # of arguments. echo is valid even with 0 arguments.
  for(int i = 1; i<argc; i++) {
    printf("%s ", argv[i]);
  }
  printf("\n");
  return 0;
}
