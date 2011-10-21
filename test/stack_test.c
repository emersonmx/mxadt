#include <stdio.h>
#include <stdlib.h>
#include <mxadt/stack.h>

int main()
{
  mxadt_stack* s = mxadt_stack_initialize();

  printf("Push NULL Test is ");
  if (mxadt_stack_push(NULL, 0))
    printf("OK.\n");
  else
    printf("Fail.\n");

  printf("Pop NULL Test is ");
  if (mxadt_stack_pop(NULL))
    printf("OK.\n");
  else
    printf("Fail.\n");

  printf("Pop empty Test is ");
  if (mxadt_stack_pop(s))
    printf("OK.\n");
  else
    printf("Fail.\n");

  mxadt_stack_push(s, (void*) 10);
  mxadt_stack_push(s, (void*) 15);
  mxadt_stack_push(s, (void*) 9);
  mxadt_stack_push(s, (void*) 1);
  mxadt_stack_pop(s);
  mxadt_stack_push(s, (void*) 5);

  printf("Stack size: %u\n", s->size);
  mxadt_stack_element* top = NULL;
  for (top = s->top; top != NULL; top = top->next)
  {
    printf("%d ", (int) top->data);
  }
  printf("\n");

  mxadt_stack_pop(s);
  mxadt_stack_pop(s);
  printf("Stack size: %u\n", s->size);

  mxadt_stack_finalize(s);
  return ;
}

