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

#ifndef MXADT_SINGLE_LINK_ELEMENT_H_
#define MXADT_SINGLE_LINK_ELEMENT_H_

/**
 * This struct you can use to implement stack, queue, or another abstract
 * data type that have a single link for another element.
 */
typedef struct mxadt_single_link_element mxadt_single_link_element;
struct mxadt_single_link_element
{
    void* data;                      /**< Element data. */
    mxadt_single_link_element* next; /**< Pointer to the next element. */
};

/**
 * Creates a new mxadt_single_link_element.
 *
 * @return A new mxadt_single_link_element or NULL on error.
 */
mxadt_single_link_element* mxadt_single_link_element_create();

/**
 * Destroys the element passed by parameter.
 *
 * @param element The pointer for the element.
 */
inline void
mxadt_single_link_element_destroy(mxadt_single_link_element* element);

#endif /* MXADT_SINGLE_LINK_ELEMENT_H_ */

