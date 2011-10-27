/**
 * Copyright 2011 Emerson Max de Medeiros Silva
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

#ifndef _MXADT_STACK_H
#define _MXADT_STACK_H

typedef struct mxadt_stack mxadt_stack;

mxadt_stack* mxadt_stack_initialize();
void mxadt_stack_finalize(mxadt_stack* stack);

inline unsigned int mxadt_stack_size(mxadt_stack* stack);

void* mxadt_stack_top(mxadt_stack* stack);
int mxadt_stack_push(mxadt_stack* stack, void* data);
int mxadt_stack_pop(mxadt_stack* stack);
int mxadt_stack_empty(mxadt_stack* stack);

#endif /* _MXADT_STACK_H */

