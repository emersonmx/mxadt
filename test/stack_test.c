/**
 * Copyright 2011-2014 Emerson Max de Medeiros Silva
 *
 * Author: Emerson Max de Medeiros Silva <emersonmx@gmail.com>
 *
 * This file is part of mxadt.
 *
 * mxadt is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * mxadt is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with mxadt.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <mxadt/stack.h>

int main()
{
    mxadt_stack* s = mxadt_stack_create();

    mxadt_stack_push(s, (void*) 10);
    mxadt_stack_push(s, (void*) 15);
    mxadt_stack_push(s, (void*) 100000000);
    mxadt_stack_push(s, (void*) -100000000);
    mxadt_stack_push(s, (void*) 9);
    mxadt_stack_push(s, (void*) 1);
    mxadt_stack_pop(s);
    mxadt_stack_push(s, (void*) 5);

    printf("Stack size: %u\n", s->size);

    while(!mxadt_stack_empty(s))
    {
        printf("%d ", (int) s->top->data);
        mxadt_stack_pop(s);
    }

    printf("\nStack size: %u\n", s->size);

    mxadt_stack_destroy(s);
    return 0;
}

