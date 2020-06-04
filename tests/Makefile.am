TESTS = \
	mylibrary

check_PROGRAMS = $(TESTS)

AM_CFLAGS = \
	-Wall -Werror \
	-I$(top_srcdir)/include\
	-I$(abs_top_builddir)/include\
	$(COVERAGE_CFLAGS)
AM_CXXFLAGS = \
	-Wall -Werror\
	-I$(top_srcdir)/include\
	-I$(abs_top_builddir)/include/\
	$(COVERAGE_CFLAGS)
AM_LDFLAGS =\
	-L$(top_builddir)/src/ \
	-Wl,--start-group \
	$(COVERAGE_LDFLAGS) -lgtest -lgmock -lpthread -lrt

mylibrary_SOURCES = \
	../src/mylibrary.c\
	mylibrary.cpp

AUTOMAKE_OPTIONS = subdir-objects
