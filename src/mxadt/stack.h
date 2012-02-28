/*
  Copyright 2011 Emerson Max de Medeiros Silva

  Author: Emerson Max de Medeiros Silva <emersonmx@gmail.com>

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

#ifndef _MXADT_STACK_H
#define _MXADT_STACK_H

#include <mxadt/types.h>

/**
 * This is the declaration of the abstract data type "stack".
 * The attributes of structure was hidden of the programmer, for avoid
 * mistakes in programming.
 */
typedef struct mxadt_stack mxadt_stack;

/**
 * Creates a new empty stack.
 *
 * @return a new empty stack or NULL on error.
 */
mxadt_stack* mxadt_stack_initialize();
/**
 * Destroys the stack passed by parameter.
 *
 * @param stack the pointer for the stack. if stack pointer is NULL,
 * nothing happens.
 */
void mxadt_stack_finalize(mxadt_stack* stack);

/**
 * Returns the stack size.
 *
 * @param stack the pointer for the stack. If the stack pointer is NULL, a
 * segmentation fault will occur.
 *
 * @return the stack size.
 */
inline unsigned int mxadt_stack_size(mxadt_stack* stack);
/**
 * Tests whether the stack is empty.
 *
 * @param stack the pointer for the stack. If the stack pointer is NULL, a
 * segmentation fault will occur.
 *
 * @return true if the stack is empty, or false otherwise.
 */
inline bool mxadt_stack_empty(mxadt_stack* stack);
/**
 * Returns the stack top.
 *
 * @param stack the pointer for the stack. If the stack pointer is NULL, a
 * segmentation fault will occur.
 *
 * @return the stack top.
 */
inline void* mxadt_stack_top(mxadt_stack* stack);
/**
 * Pushes a new value on the stack.
 *
 * @param stack the pointer for the stack. If the stack pointer is NULL, a
 * segmentation fault will occur.
 * @param data the data that will be pushed.
 */
void mxadt_stack_push(mxadt_stack* stack, void* data);
/**
 * Pops the top of the stack.
 *
 * @param stack the pointer for the stack. If the stack pointer is NULL, a
 * segmentation fault will occur.
 */
void mxadt_stack_pop(mxadt_stack* stack);

#endif /* _MXADT_STACK_H */

