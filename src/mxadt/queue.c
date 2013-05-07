/*
  Copyright (C) 2011-2013 Emerson Max de Medeiros Silva

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

#include "mxadt/queue.h"
#include "mxadt/single_link_element.h"

struct mxadt_queue
{
    unsigned int size;
    mxadt_single_link_element* front;
    mxadt_single_link_element* back;
};

mxadt_queue* mxadt_queue_create()
{
    mxadt_queue* queue = malloc(sizeof(mxadt_queue));

    if (queue != NULL)
    {
        queue->size = 0;
        queue->front = queue->back = NULL;
    }

    return queue;
}

void mxadt_queue_destroy(mxadt_queue* queue)
{
    while (!mxadt_queue_empty(queue))
    {
        mxadt_queue_pop(queue);
    }

    free(queue);
}

unsigned int mxadt_queue_size(mxadt_queue* queue)
{
    return queue->size;
}

bool mxadt_queue_empty(mxadt_queue* queue)
{
    return (queue->front == NULL) && (queue->back == NULL);
}

void* mxadt_queue_front(mxadt_queue* queue)
{
    return queue->front->data;
}

void* mxadt_queue_back(mxadt_queue* queue)
{
    return queue->back->data;
}

void mxadt_queue_push(mxadt_queue* queue, void* data)
{
    mxadt_single_link_element* new_element = mxadt_single_link_element_create();

    if (new_element != NULL)
    {
        new_element->data = data;
        if (mxadt_queue_empty(queue))
        {
            queue->front = queue->back = new_element;
        }
        else
        {
            queue->back->next = new_element;
            queue->back = new_element;
        }
        queue->size++;
    }
}

void mxadt_queue_pop(mxadt_queue* queue)
{
    mxadt_single_link_element* front = queue->front;

    if (queue->front == queue->back)
    {
        queue->front = queue->back = NULL;
    }
    else
    {
        queue->front = front->next;
    }

    mxadt_single_link_element_destroy(front);
    queue->size--;
}

