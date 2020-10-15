#include <module.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stddef.h>

int main(void)
{
  int c = addition(10, 1);
  FILE* file = fopen("test-output", "w+c");
  if (file == NULL) {
	strerror(errno);
	return -1;
  }
  
  if (c != 11) {
	fputs("test failed\n", file);
	fclose(file);
	return -1;
  }

  else {
	fputs("test ok\n", file);
	fclose(file);
	return 0;
  }

  
}
