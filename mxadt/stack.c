/*
  Copyright (C) 2011-2014 Emerson Max de Medeiros Silva

  This file is part of mxadt.

  mxadt is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  mxadt is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with mxadt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdlib.h>

#include <mxadt/stack.h>

mxadt_stack* mxadt_stack_create()
{
    mxadt_stack* stack = malloc(sizeof(mxadt_stack));

    if (stack != NULL)
    {
        stack->size = 0;
        stack->top = NULL;
    }

    return stack;
}

void mxadt_stack_destroy(mxadt_stack* stack)
{
    while (!mxadt_stack_empty(stack))
    {
        mxadt_stack_pop(stack);
    }

    free(stack);
}

bool mxadt_stack_empty(mxadt_stack* stack)
{
    return stack->top == NULL;
}

void mxadt_stack_push(mxadt_stack* stack, void* data)
{
    mxadt_single_link_element* top = stack->top;
    mxadt_single_link_element* new_element = mxadt_single_link_element_create();

    if (new_element != NULL)
    {
        new_element->data = data;
        new_element->next = top;
        stack->top = new_element;
        stack->size++;
    }
}

void mxadt_stack_pop(mxadt_stack* stack)
{
    mxadt_single_link_element* top = stack->top;
    stack->top = top->next;
    mxadt_single_link_element_destroy(top);
    stack->size--;
}

