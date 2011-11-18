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

#ifndef _MXADT_TYPES_H
#define _MXADT_TYPES_H

#include <mxadt/config.h>

#ifdef HAVE_STDBOOL_H
#   include <stdbool.h>
#else
typedef enum
{
    false,
    true
} bool;
#endif

typedef struct mxadt_list_element mxadt_list_element;
struct mxadt_list_element
{
    void* data;
    mxadt_list_element* next;
};

#endif /* _MXADT_TYPES_H */

