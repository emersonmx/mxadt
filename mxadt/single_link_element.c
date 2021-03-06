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

#include <stdlib.h>

#include <mxadt/single_link_element.h>

mxadt_single_link_element* mxadt_single_link_element_create()
{
    mxadt_single_link_element* element =
        malloc(sizeof(mxadt_single_link_element));

    element->data = NULL;
    element->next = NULL;

    return element;
}

void mxadt_single_link_element_destroy(mxadt_single_link_element* element)
{
    free(element);
}

