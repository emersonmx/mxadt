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

#ifndef MXADT_QUEUE_H_
#define MXADT_QUEUE_H_

#include "mxadt/types.h"

/**
 * This is the declaration of the abstract data type "queue".
 * The attributes of structure was hidden of the programmer, for avoid
 * mistakes in programming.
 */
typedef struct mxadt_queue mxadt_queue;

/**
 * Creates a new empty queue.
 *
 * @return a new empty queue or NULL on error.
 */
mxadt_queue* mxadt_queue_create();

/**
 * Destroys the queue passed by parameter.
 *
 * @param queue the pointer for the queue. if queue pointer is NULL,
 * nothing happens.
 */
void mxadt_queue_destroy(mxadt_queue* queue);

/**
 * Returns the queue size.
 *
 * @param queue the pointer for the queue. If the queue pointer is NULL, a
 * segmentation fault will occur.
 *
 * @return the queue size.
 */
inline unsigned int mxadt_queue_size(mxadt_queue* queue);

/**
 * Tests whether the queue is empty.
 *
 * @param queue the pointer for the queue. If the queue pointer is NULL, a
 * segmentation fault will occur.
 *
 * @return true if the queue is empty, or false otherwise.
 */
inline bool mxadt_queue_empty(mxadt_queue* queue);

/**
 * Returns the first element of queue.
 *
 * @param queue the pointer for the queue. If the queue pointer is NULL, a
 * segmentation fault will occur.
 *
 * @return the first element of queue.
 */
inline void* mxadt_queue_front(mxadt_queue* queue);

/**
 * Returns the last element of queue.
 *
 * @param queue the pointer for the queue. If the queue pointer is NULL, a
 * segmentation fault will occur.
 *
 * @return the last element of queue.
 */
inline void* mxadt_queue_back(mxadt_queue* queue);

/**
 * Pushes a new value on the queue.
 *
 * @param queue the pointer for the queue. If the queue pointer is NULL, a
 * segmentation fault will occur.
 * @param data the data that will be pushed.
 */
void mxadt_queue_push(mxadt_queue* queue, void* data);

/**
 * Pops the top of the queue.
 *
 * @param queue the pointer for the queue. If the queue pointer is NULL, a
 * segmentation fault will occur.
 */
void mxadt_queue_pop(mxadt_queue* queue);

#endif /* MXADT_QUEUE_H_ */

