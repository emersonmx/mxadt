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

#ifndef _MXADT_LINKED_LIST_H
#define _MXADT_LINKED_LIST_H

#include <mxadt/types.h>

typedef struct mxadt_linked_list mxadt_linked_list;

mxadt_linked_list* mxadt_linked_list_initialize();
void mxadt_linked_list_finalize(mxadt_linked_list* linked_list);

inline unsigned int mxadt_linked_list_size(mxadt_linked_list* linked_list);
inline bool mxadt_linked_list_empty(mxadt_linked_list* linked_list);

inline void* mxadt_linked_list_front(mxadt_linked_list* linked_list);
inline void* mxadt_linked_list_back(mxadt_linked_list* linked_list);

void mxadt_linked_list_push_front(mxadt_linked_list* linked_list);
void mxadt_linked_list_pop_back(mxadt_linked_list* linked_list);
void mxadt_linked_list_push_back(mxadt_linked_list* linked_list);
void mxadt_linked_list_pop_back(mxadt_linked_list* linked_list);

#endif /* _MXADT_LINKED_LIST_H */

