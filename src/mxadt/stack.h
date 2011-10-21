#ifndef _MXADT_STACK_H
#define _MXADT_STACK_H

typedef struct mxadt_stack_element mxadt_stack_element;
struct mxadt_stack_element
{
  void* data;
  mxadt_stack_element* next;
};

typedef struct mxadt_stack mxadt_stack;
struct mxadt_stack
{
  unsigned int size;
  mxadt_stack_element* top;
};

mxadt_stack* mxadt_stack_initialize();
void mxadt_stack_finalize(mxadt_stack* stack);

int mxadt_stack_push(mxadt_stack* stack, void* data);
int mxadt_stack_pop(mxadt_stack* stack);

#endif /* _MXADT_STACK_H */

