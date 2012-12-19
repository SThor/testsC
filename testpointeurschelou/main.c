#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  int a=0;
  int* b=&a;
  int* c=&b;
  int* d=&c;

  printf("%x, %x, %x, %x, %x, %x, %x, %x\n", a, &a, b, &b, c, &c, d, &d);

  return 0;
}
