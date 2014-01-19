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
	mxadt/linked_list.h \
	mxadt/double_link_element.h

MXADT_TESTS = \
	test/stack_test \
	test/queue_test

TESTS = $(MXADT_TESTS)
check_PROGRAMS = $(MXADT_TESTS)

test_stack_test_SOURCES = test/stack_test.c
test_stack_test_LDADD = mxadt/libmxadt.la

test_queue_test_SOURCES = test/queue_test.c
test_queue_test_LDADD = mxadt/libmxadt.la
