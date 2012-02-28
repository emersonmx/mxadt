/*
  Copyright 2011, 2012 Emerson Max de Medeiros Silva

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

#ifndef _MXADT_DOUBLE_LINK_ELEMENT_H
#define _MXADT_DOUBLE_LINK_ELEMENT_H

typedef struct mxadt_double_link_element mxadt_double_link_element;
struct mxadt_double_link_element
{
    void* data;
    mxadt_double_link_element* next;
    mxadt_double_link_element* previous;
};

mxadt_double_link_element* mxadt_double_link_element_initialize();
inline void
mxadt_double_link_element_finalize(mxadt_double_link_element* element);

#endif /* _MXADT_DOUBLE_LINK_ELEMENT_H */

