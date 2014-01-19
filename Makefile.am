ACLOCAL_AMFLAGS = -I m4

AM_CPPFLAGS = \
    -Wall \
    -Werror

AM_CFLAGS = \
	-Wall \
	-Werror

lib_LTLIBRARIES = mxadt/libmxadt.la

mxadt_libmxadt_la_SOURCES = \
	mxadt/stack.c \
	mxadt/queue.c \
	mxadt/linked_list.c \
	mxadt/single_link_element.c \
	mxadt/double_link_element.c

mxadt_libmxadt_la_LDFLAGS = \
    -version-info 0:0:0

nobase_include_HEADERS = \
	mxadt/single_link_element.h \
	mxadt/queue.h \
	mxadt/stack.h \
	mxadt/config.h \
	mxadt/types.h \
	mxadt/arraylist.h \
	mxadt/linked_list.h \
	mxadt/double_link_element.h

