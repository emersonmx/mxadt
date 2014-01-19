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

#ifndef MXADT_STACK_H_
#define MXADT_STACK_H_

#include <mxadt/types.h>
#include <mxadt/single_link_element.h>

/**
 * This is the declaration of the abstract data type "stack".
 * The attributes of structure was hidden of the programmer, for avoid
 * mistakes in programming.
 */
typedef struct mxadt_stack
{
    size_t size;
    mxadt_single_link_element* top;
} mxadt_stack;

/**
 * Creates a new empty stack.
 *
 * @return A new empty stack or NULL on error.
 */
mxadt_stack* mxadt_stack_create();

/**
 * Destroys the stack passed by parameter.
 *
 * @param stack The pointer for the stack. If the stack pointer is NULL, a
 * segmentation fault with occur.
 */
void mxadt_stack_destroy(mxadt_stack* stack);

/**
 * Tests whether the stack is empty.
 *
 * @param stack The pointer for the stack. If the stack pointer is NULL, a
 * segmentation fault will occur.
 *
 * @return true if the stack is empty, or false otherwise.
 */
inline bool mxadt_stack_empty(mxadt_stack* stack);

/**
 * Pushes a new value on the stack.
 *
 * @param stack The pointer for the stack. If the stack pointer is NULL, a
 * segmentation fault will occur.
 * @param data The data that will be pushed.
 */
void mxadt_stack_push(mxadt_stack* stack, void* data);

/**
 * Pops the top of the stack.
 *
 * @param stack The pointer for the stack. If the stack pointer is NULL, a
 * segmentation fault will occur.
 */
void mxadt_stack_pop(mxadt_stack* stack);

#endif /* MXADT_STACK_H_ */

