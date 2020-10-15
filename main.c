#include <module.h>
#include <stdio.h>

int main(void)
{
  int c = addition(10, 1);

  if (c != 11)
	{
	  fputs("test failed", stderr);
	  return -1;
	}

  else
	return 0;
}
