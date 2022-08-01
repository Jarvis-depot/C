#include <stdio.h>

typedef struct
{
  unsigned int size;
  void *ptr;
} mem_t;

int init(mem_t *mem, unsigned int size)
{
  mem->size = size;
  mem->ptr = malloc(size);
  return mem->ptr ? 0 : -1;
}

int func()
{
  mem_t mem;
  init(&mem, 0x100);
}

int main(int argc, const char *argv[])
{
  func();
  printf("Hello World\n");
  return 0;
}