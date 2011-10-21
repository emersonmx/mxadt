#include <stdlib.h>
#include <mxadt/stack.h>

mxadt_stack* mxadt_stack_initialize()
{
  mxadt_stack* stack = malloc(sizeof(mxadt_stack));
  if (stack)
  {
    stack->size = 0;
    stack->top = NULL;
  }

  return stack;
}

void mxadt_stack_finalize(mxadt_stack* stack)
{
  if (!stack)
    return;

  unsigned int i;
  for (i = 0; i < stack->size; i++)
  {
    mxadt_stack_pop(stack);
  }

  free(stack);
}

int mxadt_stack_push(mxadt_stack* stack, void* data)
{
  if (!stack)
    return -1;

  mxadt_stack_element* top = stack->top;
  mxadt_stack_element* new_element = malloc(sizeof(mxadt_stack_element));
  if (!new_element)
    return -1;

  new_element->data = data;
  new_element->next = top;
  stack->top = new_element;
  stack->size++;

  return 0;
}

int mxadt_stack_pop(mxadt_stack* stack)
{
  if (!stack)
    return -1;

  if (!stack->top)
    return -1;

  mxadt_stack_element* top = stack->top;
  stack->top = top->next;
  free(top);
  stack->size--;

  return 0;
}

