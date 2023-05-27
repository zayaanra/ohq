#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    fprintf(stderr, "rm: missing operand\n");
  } else {
    // TODO - Add -r for recursive removal
    for(int i = 1; i<argc; i++) {
      int fail = remove(argv[i]);
      if (fail) {
	fprintf(stderr, "rm: cannot remove: '%s': No such file or directory\n", argv[i]);
      }
    }
  }
}
