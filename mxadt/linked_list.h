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

#ifndef MXADT_LINKED_LIST_H_
#define MXADT_LINKED_LIST_H_

#include <mxadt/types.h>
#include <mxadt/double_link_element.h>

/**
 * This is the declaration of the abstract data type "linked list".
 * The attributes of structure was hidden of the programmer, for avoid
 * mistakes in programming.
 */
typedef struct mxadt_linked_list
{
    size_t size;
    mxadt_double_link_element* front;
    mxadt_double_link_element* back;
} mxadt_linked_list;

/**
 * Creates a new empty linked list.
 *
 * @return A new empty linked list or NULL on error.
 */
mxadt_linked_list* mxadt_linked_list_create();

/**
 * Returns the linked list size.
 *
 * @param linked_list The pointer for the linked list. If the linked list
 * pointer is NULL, a segmentation fault will occur.
 *
 * @return The linked list size.
 */
void mxadt_linked_list_destroy(mxadt_linked_list* linked_list);

/**
 * Tests whether the linked list is empty.
 *
 * @param linked_list The pointer for the linked list. If the linked list
 * pointer is NULL, a segmentation fault will occur.
 *
 * @return true if the linked list is empty, or false otherwise.
 */
inline bool mxadt_linked_list_empty(mxadt_linked_list* linked_list);

/**
 * Pushes a new value in the front of linked list.
 *
 * The new element will be the first element, that will point for the old first
 * element.
 *
 * \verbatim
FRONT
  |
  V
 ___      ___
|   |<---|OLD|
|NEW|    |1st|---> ...
|___|--->|___|\endverbatim
 *
 * @param linked_list The pointer for the linked list. If the linked list
 * pointer is NULL, a segmentation fault will occur.
 * @param data The data that will be pushed.
 */
void mxadt_linked_list_push_front(mxadt_linked_list* linked_list, void* data);

/**
 * Pops the front of the linked list.
 *
 * The first element will be the old first element.
 *
 * \verbatim
DELETE   FRONT
  |        |
  V        V
 ___      ___
|   |    |OLD|
|NEW|    |1st|---> ...
|___|    |___|\endverbatim
 *
 * @param linked_list The pointer for the linked list. If the linked list
 * pointer is NULL, a segmentation fault will occur.
 */
void mxadt_linked_list_pop_front(mxadt_linked_list* linked_list);

/**
 * Pushes a new value in the back of linked list.
 *
 * The new element will be the last element, that will be pointed by the old
 * last element.
 *
 * \verbatim
                 BACK
                   |
                   V
        ____      ___
       |OLD |<---|   |
...<---|LAST|    |NEW|
       |____|--->|___|\endverbatim
 *
 * @param linked_list The pointer for the linked list. If the linked list
 * pointer is NULL, a segmentation fault will occur.
 * @param data The data that will be pushed.
 */
void mxadt_linked_list_push_back(mxadt_linked_list* linked_list, void* data);

/**
 * Pops the back of the linked list.
 *
 * The last element will be the old last element.
 *
 * \verbatim
        BACK    DELETE
         |         |
         V         V
        ____      ___
       |OLD |    |   |
...<---|LAST|    |NEW|
       |____|    |___|\endverbatim
 *
 * @param linked_list The pointer for the linked list. If the linked list
 * pointer is NULL, a segmentation fault will occur.
 */
void mxadt_linked_list_pop_back(mxadt_linked_list* linked_list);

#endif /* MXADT_LINKED_LIST_H_ */

