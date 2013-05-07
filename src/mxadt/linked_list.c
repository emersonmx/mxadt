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

#include "mxadt/linked_list.h"

struct mxadt_linked_list
{
    size_t size;
    mxadt_double_link_element* front;
    mxadt_double_link_element* back;
};

mxadt_linked_list* mxadt_linked_list_create()
{
    mxadt_linked_list* linked_list = malloc(sizeof(mxadt_linked_list));

    if (linked_list != NULL)
    {
        linked_list->front = linked_list->back = NULL;
        linked_list->size = 0;
    }

    return linked_list;
}

void mxadt_linked_list_destroy(mxadt_linked_list* linked_list)
{
    while(!mxadt_linked_list_empty(linked_list))
    {
        mxadt_linked_list_pop_back(linked_list);
    }

    free(linked_list);
}

size_t mxadt_linked_list_size(mxadt_linked_list* linked_list)
{
    return linked_list->size;
}

bool mxadt_linked_list_empty(mxadt_linked_list* linked_list)
{
    return (linked_list->front == NULL) && (linked_list->back == NULL);
}

void* mxadt_linked_list_front(mxadt_linked_list* linked_list)
{
    return linked_list->front->data;
}

void* mxadt_linked_list_back(mxadt_linked_list* linked_list)
{
    return linked_list->back->data;
}

mxadt_double_link_element*
mxadt_linked_list_front_element(mxadt_linked_list* linked_list)
{
    return linked_list->front;
}

mxadt_double_link_element*
mxadt_linked_list_back_element(mxadt_linked_list* linked_list)
{
    return linked_list->back;
}

void mxadt_linked_list_push_front(mxadt_linked_list* linked_list, void* data)
{
    mxadt_double_link_element* new_element = mxadt_double_link_element_create();

    if (new_element != NULL)
    {
        new_element->data = data;
        if (mxadt_linked_list_empty(linked_list))
        {
            linked_list->front = linked_list->back = new_element;
        }
        else
        {
            new_element->next = linked_list->front;
            linked_list->front = new_element;
        }
        linked_list->size++;
    }
}

void mxadt_linked_list_pop_front(mxadt_linked_list* linked_list)
{
    mxadt_double_link_element* front = linked_list->front;

    if (linked_list->front == linked_list->back)
    {
        linked_list->front = linked_list->back = NULL;
    }
    else
    {
        linked_list->front = front->next;
    }

    mxadt_double_link_element_destroy(front);
    linked_list->size--;
}

void mxadt_linked_list_push_back(mxadt_linked_list* linked_list, void* data)
{
    mxadt_double_link_element* new_element = mxadt_double_link_element_create();

    if (new_element != NULL)
    {
        new_element->data = data;
        if (mxadt_linked_list_empty(linked_list))
        {
            linked_list->front = linked_list->back = new_element;
        }
        else
        {
            linked_list->back->next = new_element;
            linked_list->back = new_element;
        }
        linked_list->size++;
    }
}

void mxadt_linked_list_pop_back(mxadt_linked_list* linked_list)
{
    mxadt_double_link_element* back = linked_list->back;

    if (linked_list->front == linked_list->back)
    {
        linked_list->front = linked_list->back = NULL;
    }
    else
    {
        linked_list->back = back->previous;
    }

    mxadt_double_link_element_destroy(back);
    linked_list->size--;
}

