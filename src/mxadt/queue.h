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

#ifndef _MXADT_QUEUE_H
#define _MXADT_QUEUE_H

#include <mxadt/types.h>

typedef struct mxadt_queue mxadt_queue;

mxadt_queue* mxadt_queue_initialize();
void mxadt_queue_finalize(mxadt_queue* queue);

inline unsigned int mxadt_queue_size(mxadt_queue* queue);
inline bool mxadt_queue_empty(mxadt_queue* queue);

inline void* mxadt_queue_front(mxadt_queue* queue);
inline void* mxadt_queue_back(mxadt_queue* queue);

void mxadt_queue_push(mxadt_queue* queue, void* data);
void mxadt_queue_pop(mxadt_queue* queue);

#endif /* _MXADT_QUEUE_H */

