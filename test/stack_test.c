#include <stdio.h>
#include <mxadt/stack.h>

int main()
{
    mxadt_stack* s = mxadt_stack_initialize();

    mxadt_stack_push(s, (void*) 10);
    mxadt_stack_push(s, (void*) 15);
    mxadt_stack_push(s, (void*) 9);
    mxadt_stack_push(s, (void*) 1);
    mxadt_stack_pop(s);
    mxadt_stack_push(s, (void*) 5);

    printf("Stack size: %u\n", mxadt_stack_size(s));

    while(!mxadt_stack_empty(s))
    {
        printf("%d ", (int) mxadt_stack_top(s));
        mxadt_stack_pop(s);
    }

    printf("\nStack size: %u\n", mxadt_stack_size(s));

    mxadt_stack_finalize(s);
    return 0;
}

