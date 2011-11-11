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

#include <stdio.h>
#include <mxadt/queue.h>

int main()
{
    mxadt_queue* q = mxadt_queue_initialize();

    mxadt_queue_push(q, (void*) 10);
    mxadt_queue_push(q, (void*) 15);
    mxadt_queue_push(q, (void*) 100000000);
    mxadt_queue_push(q, (void*) -100000000);
    mxadt_queue_push(q, (void*) 9);
    mxadt_queue_push(q, (void*) 1);
    mxadt_queue_push(q, (void*) 5);
    mxadt_queue_pop(q);

    printf("Queue size: %u\n", mxadt_queue_size(q));

    while(!mxadt_queue_empty(q))
    {
        printf("Front: %d Back: %d\n",
               (int) mxadt_queue_front(q),
               (int) mxadt_queue_back(q));
        mxadt_queue_pop(q);
    }

    printf("Queue size: %u\n", mxadt_queue_size(q));

    mxadt_queue_finalize(q);

    return 0;
}

