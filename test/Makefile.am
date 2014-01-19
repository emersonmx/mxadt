bin_PROGRAMS = \
	stack_test \
	queue_test

AM_CPPFLAGS = \
	-Wall \
	-I$(top_srcdir)/src

AM_CFLAGS = \
	-Wall

AM_LDFLAGS = \
	-L$(top_srcdir)/src

stack_test_SOURCES = stack_test.c
stack_test_LDADD = -lmxadt

queue_test_SOURCES = queue_test.c
queue_test_LDADD = -lmxadt
