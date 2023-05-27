#include <stdio.h>
#include <dirent.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

void list(const char *dir);

void list(const char *dir) {
  struct dirent *entry; 
  DIR *d;
  d = opendir(dir);
  if (d == NULL) {
    fprintf(stderr, "ls: cannot access '%s': No such file or directory\n", dir);
  } else {
    while((entry = readdir(d)) != NULL) {
      char *fname = entry->d_name;
      // Hidden files are not shown by default when using ls
      if (strncmp(".", fname, 1)) {
	printf("%s ", entry->d_name);
      }
    }
    printf("\n");
    closedir(d);
  }
}

int main(int argc, char *argv[]) {
  // By default, ls will print the filenames in alphabetical order.
  // My implementation doesn't do that but maybe one day it will...
  if (argc <= 1) {
    list(".");
  } else {
    for(int i = 1; i<argc; i++) {
      list(argv[i]);
    }
  }
  return 0;
}
